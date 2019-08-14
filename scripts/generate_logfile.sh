#!/bin/bash
#check if a search string has been specified
numargs=$#
f [ $numargs -lt 1 ]
then
   echo #new line separ
   echo "search string not specified"
   exit 1
fi
# generate the log file
sstring=$1 #search  string
count=0
LIMIT=10

while ["$count" -lt "$LIMIT" ]

#spaces because of "test-brackets". . .
do
datestr=`date +%s` #generate date string for file
touch "log_$datestr.txt"
uname>>log_$datestr.txt
date>>log_$datestr.txt
grep
