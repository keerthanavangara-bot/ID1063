import numpy as np

# Define Matrix A (3x3)
A = np.array([
    [7, 6, 4],
    [2, 0, 5],
    [1, 2, 7]
])

# Define Matrix B (3x4)
B = np.array([
    [3, 6, 2, 0],
    [1, 7, 4, 6],
    [3, 0, 4, 5]
])

# Compute the matrix product A * B
result = np.dot(A, B)

print("Resulting Product Matrix:")
print(result)

