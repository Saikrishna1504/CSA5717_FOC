#Summing up 1 – 2 + 3 – 4 + 5…. N

read -p "Enter the value of n: " n
sum=0
sign=0

for ((i=1; i<=n; i++))
do
    if (( n % 2 == 0 ))
    then
        sum=$((sum - i))
    else
        sum=$((sum + i))
    fi
        sum=$((sum*-1))
done

echo "The sum of the series is: $sum"
