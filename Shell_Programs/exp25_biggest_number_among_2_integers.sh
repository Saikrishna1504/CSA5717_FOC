read -p "Please Enter Two different values: " a b

if [ "$a" -gt "$b" ]; then
    echo "a=$a is Largest"
else
    echo "b=$b is Largest"
fi
