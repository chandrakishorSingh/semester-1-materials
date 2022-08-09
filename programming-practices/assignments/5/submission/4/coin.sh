#!/bin/bash

# head face
HEAD="
 _____
/HEADS\\
\\_____/
\\|||||/
"

# tail face
TAIL="
 _____
/TAILS\\
\\_____/
\\|||||/
"

# toss the coin
DURATION=3
while [ $DURATION -ne 0 ]
do
	echo -e "$HEAD"
	echo "Tossing the coin..."
	sleep 1
	clear
	echo -e "$TAIL"
	echo "Tossing the coin..."
	sleep 1
	clear

	(( DURATION-- ))
done

# use $RANDOM to get result of toss
RESULT=$(( 1 + $RANDOM % 2 ))

# play the beep sound
beep
# print the heads/tails depending on result
echo "Result of toss is..."
if [ $RESULT -eq 1 ]; then
	echo -e "$HEAD"
	else
		echo -e "$TAIL"
fi
