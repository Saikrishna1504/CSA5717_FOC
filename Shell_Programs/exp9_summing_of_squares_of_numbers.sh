read -p "enter the n value: " n
sum=o

for((i=1;i<=n;i++));
do
sum=$((sum+i*i))
done
echo " sum of squares of series is $sum"
