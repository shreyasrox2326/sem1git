import math
import numpy as np
import matplotlib.pyplot as plt

# Define parameters
y = 10**-7/200
z = 10**-7/100
x = np.linspace(-201*y, 201*y, 401)
y = np.linspace(-155*z, 155*z, 311)

# Define function to compute psi
def psi_func(x, y, a0=52.9*10**-10, e=math.e):
    r = np.sqrt(x**2 + y**2)
    theta = np.arcsin(y/r)
    return 1/(81*(6*np.pi*a0**5)**0.5)*r/a0*(6-r/a0)*e**(-r/(3*a0))*np.sin(theta)

# Compute psi at every point in the grid
X, Y = np.meshgrid(x, y)
PSI = psi_func(X, Y)

# Define color map
cmap = plt.cm.rainbow
norm = plt.Normalize(10**35, 10**38)

# Plot the graph
plt.figure()
plt.imshow(PSI, cmap=cmap, norm=norm, extent=[x.min(), x.max(), y.min(), y.max()])
plt.colorbar()
plt.xlabel('x')
plt.ylabel('y')
plt.show()