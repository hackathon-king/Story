#!/bin/bash

file_path="/c/Users/Snow-Angel/tian/data"

# TODO: load & store data
load_store_data() {
    return 0
}

# file_path="/c/Users/Snow-Angel/tian/data"
latest_file=$(ls -t ${file_path}| head -n 1)
echo $latest_file


if [ -n "$latest_file" ];
then
    load_store_data
	if [ $? -eq 0 ]; 
	then
		echo job ok;
	else
		echo job failed!;
		# TODO: send alert email
		exit 1
	fi
else
    echo 456;
	# TODO: send alert email
fi





