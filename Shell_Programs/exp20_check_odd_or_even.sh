read -p "Enter an integer number: " n

if (( n % 2 ))
then
  echo "The number is odd."
else
  echo "The number is even."
fi
