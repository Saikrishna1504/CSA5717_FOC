read -p "Enter a number: " n
rev=0

while [ "$n" -ne 0 ]
do
    i=$((n % 10))
    rev=$((rev * 10 + i))
    n=$((n / 10))
done

echo "Reversed number: $rev"
