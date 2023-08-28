
a=0
b=1
read -p "Enter the value of n: " n

echo -n "Fibonacci series: $a, $b"

for (( i=3; i<=n; i++ ));
 do
    c=$((a + b))
    echo -n " $c"
    a=$b
    b=$c
done


