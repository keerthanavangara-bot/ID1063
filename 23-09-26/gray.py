import os
import subprocess
from PIL import Image

def process_existing_photo(image_path="My_photo.jpg", threshold=128, output_filename="output_bw.jpg"):
    if not os.path.exists(image_path):
        print(f"Error: Could not find {image_path}. Make sure the file is in the current folder!")
        return

    print(f"Processing {image_path} with threshold {threshold}...")
    
    # Open the image and convert it to grayscale ('L' mode)
    img = Image.open(image_path)
    grayscale_img = img.convert('L')
    
    width, height = grayscale_img.size
    pixels = grayscale_img.load()
    
    # Apply thresholding logic: if pixel >= threshold set to 255 (white), else 0 (black)
    for y in range(height):
        for x in range(width):
            if pixels[x, y] >= threshold:
                pixels[x, y] = 255
            else:
                pixels[x, y] = 0
                
    # Save the processed black-and-white image
    grayscale_img.save(output_filename)
    print(f"Done! Opening {output_filename}...")

    # Automatically trigger your phone's image viewer to open the file
    subprocess.run(["termux-open", output_filename])

if __name__ == '__main__':
    process_existing_photo(image_path="my_photo.jpg", threshold=128)

