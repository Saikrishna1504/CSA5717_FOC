read -p "enter the n value " n
sum=0
for((i=1;i<=n;i++))
do
sum=$((sum+i*i*i))
done
echo "sum of series is $sum"
