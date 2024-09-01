# Import necessary modules
import time
import os
import sys
from decimal import *

# Define a function to calculate the value of e to a specified number of decimal places
def calculate_e(numdig):
    """
    Calculate the value of e to a specified number of decimal places.

    Args:
        numdig (int): The number of decimal places to evaluate.

    Returns:
        None

    Example:
        >>> calculate_e(50)
         99 term(s) evaluated  |  151  significant digits evaluated
        Value of e to 50 decimal places (truncated) is:
        2. 71828 18284 59045 23536 02874 71352 66249 77572 47093 69995 
    """
    # Add 101 to the number of decimal places to ensure accurate calculation
    numdig += 101
    
    # Set the precision of the Decimal module to the number of decimal places
    getcontext().prec = numdig

    # Define a nested function to calculate the factorial of a number
    def fact(x):
        """
        Calculate the factorial of a number.

        Args:
            x (int): The number to calculate the factorial of.

        Returns:
            int: The factorial of x.
        """
        # Base case: factorial of 0 is 1
        if x == 0:
            return 1
        else:
            # Initialize a variable to store the factorial
            y = 1
            # Calculate the factorial using a loop
            for i in range(1, x + 1):
                y *= i
            return y

    # Initialize variables to store the result and the number of terms evaluated
    g = 0
    t = 1
    f = 0
    
    # Loop until the result converges
    while t:
        # Calculate the next term in the series
        p = Decimal(1) / Decimal(fact(g))
        
        # Convert the result to a string to compare with the previous result
        fold = '{0:f}'.format(f)
        fold += 'aa'
        
        # Add the new term to the result
        f += p
        
        # Convert the new result to a string
        fnew = '{0:f}'.format(f)
        fnew += 'aa'
        
        # Initialize variables to store the number of same digits and the length of the result
        q = 1
        samecount = 0
        le = 0
        
        # Loop to compare the new result with the previous result
        while q:
            # If the new result is the same as the previous result, exit the loop
            if fnew == fold:
                q = 0
            # If the current digit is the same as the corresponding digit in the previous result, increment the count
            if le != 1 and fold[le] == fnew[le]:
                samecount += 1
            # If the current digit is different from the corresponding digit in the previous result, exit the loop
            elif le == 1:
                samecount += 0
            else:
                q = 0
            # Increment the length of the result
            le += 1
        
        # If the new result is the same as the previous result, exit the loop
        if fnew == fold:
            t = 0
        else:
            # Print the number of terms evaluated and the number of same digits
            print('', g + 1, 'term(s) evaluated  | ', samecount, 'digits evaluated', flush=1, end='\r')

        # Increment the number of terms evaluated
        g += 1

    # Clear the previous line and print the final result
    sys.stdout.write('\x1b[1A')
    sys.stdout.write('\x1b[2K')
    print('', g + 1, 'term(s) evaluated  | ', numdig, ' significant digits evaluated', flush=1)
    print(' Value of e to', numdig - 101, 'decimal places (truncated) is:')
    
    # Print the result, 5 digits at a time, with spaces in between
    for i in range(len(str(f)) - 100):
        print(str(f)[i], flush=1, end='')
        if (not (i - 1) % 5) and i != 0:
            print(' ', end='', flush=1)
        if (not (i - 1) % 60) and i != 0 and i != 1:
            print('', flush=1)

# Example usage:
numdig = int(input("Enter number of decimal places to be evaluated: "))
calculate_e(numdig)