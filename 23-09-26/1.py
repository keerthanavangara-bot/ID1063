import numpy as np

def rms(a):
    return np.sqrt(np.mean(np.square(a)))

def main():
    with open('input.txt', 'r') as f:
        tokens = f.read().split()
        
    if not tokens:
        return
        
    iterator = iter(tokens)
    
    for token in iterator:
        n = int(token)
        a = np.array([float(next(iterator)) for _ in range(n)], dtype=float)
        
        result = rms(a)
        print(f"{result:.2f}")

if __name__ == "__main__":
    main()

