import matplotlib.pyplot as plt
import numpy as np
import random

def plot_sierpinsky_triangle(num_points: int = 100000) -> None:
    """
    Plots a Sierpinsky triangle using the chaos game algorithm.

    Parameters:
    num_points (int): The number of points to plot. Defaults to 100000.

    Returns:
    None

    Example:
    >>> plot_sierpinsky_triangle(10000)
    """

    # initialise arrays for plotting
    xx = [1, 11, 6]  # array of all x coords
    yy = [1, 1, 1+5*3**0.5]  # array of all y coords 

    p = [[1,1],[11,1],[6,1+5*3**0.5]]  # array of corner points of the triangle
    z = [2,2]  # random starting point

    # for loop to plot sierpinsky triangle (chaos game)
    for i in range(num_points):
        x = random.randint(0,2) 
        y = p[x]  # choose random corner
        z[0] = (z[0]+y[0])/2  # calculate x coordinate
        z[1] = (z[1]+y[1])/2  # calculate y coordinate
        xx.append(z[0])  # append x coord
        yy.append(z[1])  # append y coord

    xpoints = np.array(xx) 
    ypoints = np.array(yy)

    # plot
    plt.plot(xpoints, ypoints, ',')

    # display
    plt.show()

# Call the function
plot_sierpinsky_triangle(100000)