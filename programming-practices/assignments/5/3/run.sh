#!/bin/bash

gcc $1 -o "$1.out"
touch "$1.output.txt"
"./$1.out" > "$1.output.txt"
