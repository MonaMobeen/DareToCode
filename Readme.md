#palindrome number:

A palindrome number is a number that remains the same when its digits are reversed. For example, 121, 1221, 12321, etc. are palindrome numbers. In other words, a number is a palindrome if it reads the same from left to right as it does from right to left.

#Reverse an Integer Formula:

   remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;