read -p "enter the n value " n
sum=0
for((i=2;i<=n;i=i+2))
do
sum=$((sum+i))
done
echo "the sum of even series is : $sum"
