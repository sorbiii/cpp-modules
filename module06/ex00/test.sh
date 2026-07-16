#!/bin/bash

make re

tests=("678e32" "4" "f" "0" "nan" "42.0f" "42.78e4f" "abc" "102" "2147483648" "-inff" "7e30f")

echo ""
echo "TESTY"
echo ""
for i in "${tests[@]}"; do
    echo "test : '$i'"
    ./converter "$i"
    echo "-----------------"
done