#!/bin/bash

if [ -e $1 ]
then
	exit
else
	mkdir $1
	exit 1
fi
