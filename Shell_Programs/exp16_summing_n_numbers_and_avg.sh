
read -p "Enter the total count of numbers:" N
sum=0

for ((i=1; i<=N; i++))
do
    read -p "Enter number $i:" number
    sum=$((sum + number))
done

avg=$((sum / N))

echo "Sum: $sum"
echo "Average: $avg"
