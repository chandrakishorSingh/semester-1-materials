#!/bin/bash

arr=($(cat $1))
N="${#arr[@]}"

echo "The original order of array is as follows."
echo ${arr[*]}

# Performing Bubble sort
for (( i=0; i<N-1; i++ ))
do
	for (( j=0; j<N-i-1; j++ ))
	do
		if [ ${arr[$j]} -gt ${arr[$(( j+1 ))]} ]; then
			temp=${arr[j]}
			arr[$j]=${arr[$(( j+1 ))]}
			arr[$(( j+1 ))]=$temp
		fi
	done
done

echo "After sorting, array is as follows."
echo ${arr[*]}

# write the sorted array back to file
echo ${arr[*]} > $1
