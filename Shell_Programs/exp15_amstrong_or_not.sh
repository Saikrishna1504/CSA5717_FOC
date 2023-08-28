#Finding given number is Armstrong or not

read -p "Enter a three-digit integer: " n
org=$n
result=0

while ((org != 0)); do
    i=$((org % 10))
    ((result += i * i * i))
    org=$((org / 10))
done

if ((result == n)); then
    echo "$n is an Armstrong number."
else
    echo "$n is not an Armstrong number."
 fi
