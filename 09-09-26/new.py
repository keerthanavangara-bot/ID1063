import numpy as np
import matplotlib.pyplot as plt

# Define function and its derivative
def f(x):
    return np.exp(x) - 2

def df(x):
    return np.exp(x)

# Newton-Raphson initial values
x0 = 1.0
y0 = f(x0)
slope = df(x0)
x1 = x0 - y0 / slope

# Generate x values for plotting
x = np.linspace(0.2, 1.3, 400)
y = f(x)

# Tangent line at x0
y_tangent = slope * (x - x0) + y0

# Create figure
plt.figure(figsize=(8, 5))
plt.plot(x, y, label=r'$f(x) = e^x - 2$', color='blue', linewidth=2)
plt.plot(x, y_tangent, '--', label=r'Tangent line at $x_0 = 1$', color='orange')

# Reference lines
plt.axhline(0, color='black', linewidth=0.8, linestyle=':')
plt.axvline(0, color='black', linewidth=0.8, linestyle=':')

# Plot points x0 and x1
plt.scatter([x0], [y0], color='red', zorder=5, label=r'Initial guess $(x_0, f(x_0))$')
plt.scatter([x1], [0], color='green', zorder=5, label=r'Next root estimate $x_1 \approx 0.74$')

# Annotations
plt.annotate(r'$x_0 = 1$', (x0, y0), textcoords="offset points", xytext=(-15, 10), ha='center')
plt.annotate(r'$x_1 \approx 0.74$', (x1, 0), textcoords="offset points", xytext=(-15, -15), ha='center')

plt.title('Newton-Raphson Iteration for $e^x - 2 = 0$')
plt.xlabel('x')
plt.ylabel('y')
plt.grid(True, linestyle='--', alpha=0.6)
plt.legend()
plt.tight_layout()

# Save image file instead of using plt.show()
plt.savefig('newton_raphson_plot.png', dpi=300)

