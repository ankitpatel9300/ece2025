 #!/bin/bash
if [ "$#" -ne 2 ]
then
  echo "illegal number of parameters"
  exit 1
fi

cmd=$0
echo "command used is: $cmd"
firstarg=$1
secondarg=$2

working_dir_a="$HOME/$firstarg/"
working_dir_b="$secondarg"
if [ -e "$working_dir_a" ]
then
 cd "$working_dir_a"
 if [ -e "$working_dir_b" ]
 then 
    cd "$working_dir_b"
 else 
    mkdir "$working_dir_b"
    cd "$working_dir_b"
  fi

else
   mkdir "$working_dir_a"
   cd "$working_dir_a"
   mkdir "$working_dir_b"
   cd "$working_dir_b"
fi

# create data using command substitution

make_data_files=`touch testdata_{0..3}.txt`
app_str_a=`echo "some string" | tee  testdata_?.txt`
app_str_b=`echo "more strings" | tee -a testdata_[2-3].txt`
echo "$app_str_a"
echo "$app_str_b"

exit 0 #end of script

