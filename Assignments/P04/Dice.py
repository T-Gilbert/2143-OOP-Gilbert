##############################################################################
#  Author:   Trevor Gilbert
#  Email:    gilbert.t16@gmail.com
#  Label:    P04
#  Title:    Roll them Bones!
#  Course:   CMPS 2143
#  Semester: SPRING 2023
#
#  Description:
#        This program will implement the 'Die' and 'Dice' classes in Python,
#        based on a C++ primer file. 
#
#  Files:
#       main.py           : Driver program
#       Dice.py           : Implements die/dice function into classes
#       dice_tester.py    : Tests implementation of die rolls
##############################################################################

import random
from typing import List

# Assigns the value of the parameter 'sides' to the attribute of the instance
# Self, rolls: simulates the roll of die

class Die:
    def __init__(self, sides: int = 6):
        self.sides = sides

# Rolls: specifies the number of times die will be rolled, using default of 1
# Initialize the total variable to zero
# Returns the total value of die rolls
    
    def roll(self, rolls: int = 1) -> int:
        total = 0
        for i in range(rolls):
            total += random.randint(1, self.sides)
        return total

# Returns a string containing the value of attribute inside the brackets
  
    def __str__(self) -> str:
        return f"[{self.sides}]"

# Two __init__ methods: one which makes two arguments (num_ dice & 'sides'),
# the other which takes a single string argument 'dice_string'

class Dice:

# __init__ method creates list of 'die' objects with predetermined number of
# dice and sides, then stores it in the 'dice' attribute. Sets 3 attributes
# 'average,' 'best,' and 'constant'
  
    def __init__(self, num_dice: int = 1, sides: int = 6):
        self.dice = [Die(sides) for _ in range(num_dice)]
        self.average = False
        self.best = False
        self.constant = False

# __init__ method divides 'dice_string' to extract the number of dice and
# sides, setting attributes 'average,' 'best,' and 'constant'
  
    def __init__(self, dice_string: str):
        n, _, s = dice_string.partition('.')
        num_dice, sides = int(n), int(s)
        self.dice = [Die(sides) for _ in range(num_dice)]
        self.average = False
        self.best = False
        self.constant = False

# Method will "roll" the die in set and return sum of the rolls
        
    def roll(self, rolls: int = 1) -> int:
        total = 0
        for i in range(rolls):
            for die in self.dice:
                total += die.roll()
        return total

# max_roll will roll each die in set once returning max obtained value 
  
    def max_roll(self) -> int:
        return max([die.roll() for die in self.dice])

# Calculates the average of each die in the set
    
    def avg_roll(self) -> int:
        return sum([die.sides for die in self.dice]) // len(self.dice)

# Returns a string of each die in the set
    
    def __str__(self) -> str:
        return "".join(str(die) for die in self.dice)

# Following block performs test on 'Dice' class
# Creates multiple instances while calling various methods within them

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
    
# The test of the max roll and avg roll 
  
    dice4 = Dice(3, 6)
    print(dice4.max_roll())  
    print(dice4.avg_roll())  
    
