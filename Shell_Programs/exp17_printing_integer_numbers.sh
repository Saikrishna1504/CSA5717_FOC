#!/bin/bash

echo "Enter an integer number: "
read number

echo -n "Digits of the number: "

# Loop to extract and print digits one by one
while [ $number -ne 0 ]; do
    digit=$((number % 10)) # Get the last digit
    echo -n "$digit "      # Print the digit
    number=$((number / 10)) # Remove the last digit
done

echo # Print a newline to end the output
