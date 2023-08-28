read -p "Enter a value: " a
read -p "Enter b value: " b
read -p "Enter c value: " c

echo "Before swapping numbers: a=$a, b=$b, c=$c"

temp=$a
a=$b
b=$c
c=$temp

echo "After swapping numbers: a=$a, b=$b, c=$c"
