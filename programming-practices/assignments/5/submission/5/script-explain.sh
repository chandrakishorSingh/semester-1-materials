#!/bin/bash

# assign `5` to `limit` variable
limit=5 # seconds to wait for timeout
# assign the first argument to `file` variable
file=$1

# initialize the srand() function by current time and assign a `current time + 5` to the `timeout` variable
timeout=$(awk "BEGIN{srand(); print srand() + $limit}")
# print the `timeout` variable
echo $timeout

# until the current time is not greater than `timeout` variable or the file(whose path is assigned to `file` variable) is exists and is not empty, sleep for 1 second
until [ -s "$file" ] || [ $(awk "BEGIN{srand();print srand()}") -gt $timeout ]
do
	sleep 1
done

# if file does not exists or if it is empty, then exit with status of 1. otherwise show the contents of file using cat command.
if ! [ -s "$file" ]
then
	# timed-out
	exit 1
else
	cat $file
fi
