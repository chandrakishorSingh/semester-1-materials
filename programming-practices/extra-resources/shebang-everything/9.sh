#!/bin/bash

cat /etc/shadow
if [ $? -eq 0 ]
then
	echo "Command Executed!"
	exit
else
	echo "Command Not Executed!"
	exit 1
fi
