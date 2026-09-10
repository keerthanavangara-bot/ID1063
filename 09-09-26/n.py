import os
import numpy as np
import matplotlib.pyplot as plt

# 1. Define values for f(x) = e^x - 2
x = np.linspace(-1, 2, 400)
y = np.exp(x) - 2

# Exact root location where function crosses the x-axis
root_x = np.log(2)

# 2. Build plot
plt.figure(figsize=(8, 5))
plt.plot(x, y, label=r"$f(x) = e^x - 2$", color="blue", linewidth=2)

# Point where the graph crosses the x-axis
plt.scatter([root_x], [0], color="red", zorder=5, label=f"Root: x = ln(2) ≈ {root_x:.2f}")

# Coordinate lines and axes
plt.axhline(0, color="black", linestyle=":", linewidth=1)
plt.axvline(0, color="black", linestyle=":", linewidth=1)
plt.title(r"Graph of $f(x) = e^x - 2$")
plt.xlabel("x")
plt.ylabel("f(x)")
plt.legend()
plt.grid(True)

# 3. Save graph image locally
image_path = os.path.abspath("graph.png")
plt.savefig(image_path)
plt.close()

# 4. Open image via default application on Ubuntu
os.system(f'xdg-open "{image_path}"')

