read -p "enter the n value : " n
sum=0

for((i=0;i<=n;i++))
do
sum=$((sum+i))
done

echo "the sum of series is: $sum"
