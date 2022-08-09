#!/bin/bash

LINES=$(ls -l $1 | wc -l)
((LINES--))
echo $LINES

