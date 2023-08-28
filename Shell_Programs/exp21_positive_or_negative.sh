read -p "Enter an integer number: " n

if (( n < 0 ))
then
  echo "The number is negative."
else
  echo "The number is positive."
fi
