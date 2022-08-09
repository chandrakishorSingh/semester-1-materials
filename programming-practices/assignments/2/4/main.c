#include<stdio.h>
#include "mylib.h" /* to access library from the same folder */
int main()
{
	int x,y,sm,sb;
	x = 10;
	y = 5;
	sm = adding(x,y);
	sb = subtraction(x,y);
	printf("Sum %d",sm);
	printf("\nSubtraction %d\n",sb);
	return 0;
}

