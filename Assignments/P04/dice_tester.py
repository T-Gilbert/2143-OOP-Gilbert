import random

class Dice:
    def __init__(self, *args):
        if len(args) == 1 and isinstance(args[0], str):
            self.num_rolls, self.num_sides = map(int, args[0].split(".d."))
        elif len(args) == 2:
            self.num_rolls, self.num_sides = args
        else:
            raise ValueError("Invalid arguments")

    def roll(self):
        return sum(random.randint(1, self.num_sides) for _ in range(self.num_rolls))

    def __str__(self):
        return f"{self.num_rolls}.d.{self.num_sides}"

def print_dice_range(d, rounds=1000):
    min_roll = 999999
    max_roll = 0
    for i in range(rounds):
        t = d.roll()
        if t < min_roll:
            min_roll = t
        if t > max_roll:
            max_roll = t
    print(f"Min Roll: {min_roll} Max Roll: {max_roll}")

if __name__ == "__main__":
    random.seed()
    d10_3 = Dice(3, 10)
    d12_4 = Dice("4.d.12")
    d20_5 = Dice("5.d.20")

    print_dice_range(d10_3, 1000000)
    print(d10_3)

    print_dice_range(d12_4, 1000000)
    print(d12_4)

    print_dice_range(d20_5, 1000000)
    print(d20_5)
