#!/bin/bash
FILE= /home/ankit/ece2025/scripts/myfile.txt
WORD="ankit"


if [ -f $FILE ]

then
echo "File ""  found"
else
echo "File  " $FILE" not found"
exit 1
fi


WORD_COUNT= $(grep -c WORD FILE)

if [ $WORD_COUNT !=0 ]
then
echo "word exists $WORD_COUNT times in file $FILE"

else 
echo "word does not exists"

fi
