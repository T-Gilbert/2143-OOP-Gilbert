import random
from typing import List

from Dice import Die, Dice

if __name__ == '__main__':

# Testing the Die/Dice class
# Produce random integer between 1 and 6
  
    d6 = Die()
    print(d6.roll())  

# Produce random integer between 1 and 6
  
    dice1 = Dice()
    print(dice1.roll())

# Produce a random integer between 2 and 20

    dice2 = Dice(2, 10)
    print(dice2.roll())  

# Produce a random integer between 3 and 24 (3x8)
    
    dice3 = Dice("3.d.8")
    print(dice3.roll())  
    
# The test of max roll and avg roll 
  
    dice4 = Dice(3, 6)
    print(dice4.max_roll())  # should print 18 (3 * 6)
    print(dice4.avg_roll())  # should print 4 (average of 3 and 3 and 3)
    
