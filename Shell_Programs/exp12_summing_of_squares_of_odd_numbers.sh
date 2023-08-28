read -p "enter the n value " n
sum=0
for((i=1;i<=n;i=i+2))
do
sum=$((sum+i*i))
done
echo "sum of squares of odd number is $sum"
