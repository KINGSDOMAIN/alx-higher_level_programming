#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = abs(number) %10
if last_digit < 0:
    last_digit = -(last_digit)
    string_holder = "the last digit of {} is {}".format(number, last_digit)
if number > 5:
    print(f"{string_holder} and is greater than 5\n")
elif number == 0:
    print(f"{string_holder} and is 0\n")
elif nnumber < 6:
    print(f"{string_holder}and is less than 6 and not 0\n')
