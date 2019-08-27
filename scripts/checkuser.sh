#!/bin/bash

clear

echo " Checking user"

echo " user is , $USER ,User ID:- ,  $UID "

if [ USER=root ]
then
 echo " must not be root"

 exit 1
fi


