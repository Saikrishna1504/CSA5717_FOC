read -p "enter the n value" n
fact=1
for((i=1;i<=n;i++))
do
fact=$((fact*i))
done 
echo "factorial is given number is $fact"
