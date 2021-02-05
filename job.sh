#!/bin/bash

file_path="/c/Users/Snow-Angel/tian/data/"
file_pattern="HCI_*.xlsx"


is_last_day() {
    if [ $1 -eq 0331 -o $1 -eq 0630 -o $1 -eq 0930 -o $1 -eq 1231 ]; then
	    return 1;
	fi
	return 0;
}

last_month_quarter() {
	if [ $1 -ge 01 -a $1 -le 03 ]; then
		echo "03";
	fi
	if [ $1 -ge 04 -a $1 -le 06 ]; then
		echo "06";
	fi
	if [ $1 -ge 07 -a $1 -le 09 ]; then
		echo "09";
	fi
	if [ $1 -ge 10 -a $1 -le 12 ]; then
		echo "12";
	fi
}

# TODO: load & store data
load_store_data() {
    return 0
}

latest_file=`find ${file_path} -name ${file_pattern}`

file_name=${latest_file%.*}
file_date=$(echo -n $file_name | tail -c 8)

if [ -n "${file_date}" ]; then
	deadline=$(date -d "${file_date} -1 day +3 month" +"%Y%m")
	echo The file date is ${file_date}
	echo The deadline is ${deadline}
fi

if [ -n "${latest_file}" ]; then
	echo The latest file is ${latest_file} in ${file_path}
	echo Starting load file and store data to DataBase...
    load_store_data
	if [ $? -eq 0 ]; then
		echo Job Finished send out notify email
		echo ${deadline} >> config
		# TODO: send notify email
		exit 0
	else
		echo Job falied and send out alert email, exiting when loading and storing data! 
		# TODO: send alert email
		exit 1
	fi
else
	current_date=$(date -d "now" +"%Y%m%d")
	current_year=$(date -d "now" +"%Y")
	current_month=$(date -d "now" +"%m")
	current_monthday=$(date -d "now" +"%m%d")
	echo "current date is ${current_date}"
	
	last_month=$(last_month_quarter $current_month)
	echo last month is ${last_month}
    cat config | grep "${current_year}${last_month}*" >/dev/null
	if [ $? -eq 0 ]; then
		echo There is no file in ${file_path} and have loaded
		exit 0
	else
	    is_last_day $current_monthday
		if [ $? -eq 1 ]; then
		    echo Today is last day of the quarter! no file arrived and send out alert email
			# TODO: send alert email
			exit 1
		else
			echo Everything is ok
			exit 0
		fi
	fi
fi

