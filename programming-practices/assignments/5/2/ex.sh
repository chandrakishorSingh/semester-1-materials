#!/bin/bash

arr=(`cat $1`)

echo ${arr[@]}

echo "${#arr[@]}"
