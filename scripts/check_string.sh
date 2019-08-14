#!/bin/bash
echo "Enter your string : "
read string
count=$(grep -o "$string"  /home/ankit/ece2025/scripts/myfile.txt|wc -l)
if [ $count != 0 ];then
echo "Found it ("$count" times)"
else
echo "word not found"
fi
exit 0
