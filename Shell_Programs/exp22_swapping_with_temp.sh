read -p "enter the n value" n
read -p "enter the m value" m

echo "before swapping number: n=$n, m=$m"

temp=$n
n=$m
m=$temp

echo "after swapping numbers: n=$n, m=$m"
