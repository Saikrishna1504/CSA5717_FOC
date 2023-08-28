#!/bin/bash

printDigits() {
    local num=$1
    num=${num#-}  # Remove negative sign if present
    while [ "$num" -gt 0 ]; do
        echo -n "$((num % 10)) "
        num=$((num / 10))
    done
}

read -p "Enter an integer number: " number
echo -n "Printing digits of the number: "
printDigits "$number"
echo
