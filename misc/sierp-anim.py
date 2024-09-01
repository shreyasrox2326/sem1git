# Import necessary libraries
import matplotlib.pyplot as plt  # For creating plots
import numpy as np  # For numerical computations
import random  # For generating random numbers
import matplotlib.animation as animation  # For creating animations

# Define a function to generate a Sierpinski triangle animation
def sierpinski_animation(choice):
    """
    Generate a Sierpinski triangle animation using matplotlib.

    Parameters:
    choice (int): Choose between two animation options:
        1: A large number of points with tiny size.
        2: A lesser number of points with bigger size.

    Returns:
    None

    Example:
    >>> sierpinski_animation(1)
    """

    # Define a list of animation options
    a = [[',', (1000,)], ['.', (1,)]]
    # choice can be 1 or 2,
    # 1 gives a large number of points but each point is tiny
    # 2 gives a lesser number of points but each point is bigger

    # Define the initial x and y coordinates of the triangle
    xx = [1, 11, 6]
    yy = [1, 1, 1+5*3**0.5]

    # Define the vertices of the triangle
    p = [[1, 1], [11, 1], [6, 1+5*3**0.5]]
    # Initialize the current point
    z = [2, 2]

    # Create a new figure and axis
    fig, ax = plt.subplots()
    # Plot the initial triangle
    line, = ax.plot(xx, yy, a[choice-1][0])

    # Initialize lists to store the animated x and y coordinates
    xx_anim = []
    yy_anim = []

    # Define the update function for the animation
    def update(frame, num_points):
        """
        Update function for the animation.

        Parameters:
        frame (int): Current frame number.
        num_points (int): Number of points to generate in each frame.

        Returns:
        None
        """
        global xx_anim, yy_anim  # Use global variables

        # If this is the first frame, initialize the animated coordinates
        if frame == 0:
            xx_anim = xx.copy()
            yy_anim = yy.copy()

        # Generate new points for this frame
        for i in range(num_points):
            # Choose a random vertex
            x = random.randint(0, 2)
            y = p[x]
            # Update the current point
            z[0] = (z[0] + y[0]) / 2
            z[1] = (z[1] + y[1]) / 2
            # Append the new point to the animated coordinates
            xx_anim.append(z[0])
            yy_anim.append(z[1])

        # Update the plot with the new animated coordinates
        line.set_data(xx_anim, yy_anim)
        # Update the axis limits
        ax.set_xlim([min(xx_anim), max(xx_anim)])
        ax.set_ylim([min(yy_anim), max(yy_anim)])

    # Create the animation
    ani = animation.FuncAnimation(fig, update, frames=200, interval=0, fargs=a[choice-1][1])

    # Show the animation
    plt.show()

# Example usage:
# Ask the user to choose an animation option
choice = int(input("Enter choice 1 or 2\n1 gives a large number of points but each point is tiny\n2 gives a lesser number of points but each point is bigger\n"))
# Generate the animation
sierpinski_animation(choice)