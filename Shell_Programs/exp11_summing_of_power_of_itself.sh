#Summing up 1^1 + 2^2 + 3^3 + 4^4 + ... + n^n

read -p "enter the n value " n
sum=o
for((i=1;i<=n;i++))
do
term=$((i**i))
sum=$((sum+term))
done

echo "sum of squares of itself $sum"
