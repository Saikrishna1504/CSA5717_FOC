read -p "Enter m value: " m
read -p "Enter n value: " n

echo "Before swapping numbers: n=$m, m=$n"

m=$((m + n))
n=$((m - n))
m=$((m - n))

echo "After swapping numbers: n=$m, m=$n"
