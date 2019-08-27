#!/bin/bash

clear

echo " Checking user"

echo " user is , $USER ,User ID:- ,  $UID "

if [ EUID = 0 ]
then
 echo " must not be root"

 exit 1
fi

FILE=$1
WORD=$2
NOWORD=0
if [ -e "$FILE" ]
then
echo "$FILE File exists"

WORD_FOUND=$(grep -i -o $WORD $FILE | wc -l)
if [ "$WORD_FOUND" -ne "$NOWORD" ]
then echo "$WORD found in $FILE "
else
echo "$WORD not found in $FILE"
fi
else
echo "File Does not exists"
fi

exit 0
