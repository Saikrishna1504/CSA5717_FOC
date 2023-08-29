read -p "Enter the value of n: " n
read -p "Enter integer 1: " max

for ((i = 2; i <= n; i++))
do
    read -p "Enter integer $i: " num
    if ((num > max)); then
        max=$num
    fi
done

echo "The biggest number is: $max"
