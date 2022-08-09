#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main() {
	int l1, l2;

	if (fork() == 0)
		l1 = 0;
	else
		l1 = 1;

	if (fork() == 0)
		l2 = 0;
	else
		l2 = 1;

	int n = 0;
	int processNo = 2 * l1 + l2;
	printf("Address of the variable n before entering into loop %p\n", &n);

	while (1) {
		if (l1 == 0 && l2 == 0) {
			n += 1;
		} else if (l1 == 0 && l2 == 1) {
			n += 2;
		} else if (l1 == 1 && l2 == 0) {
			n += 3;
		} else {
			n += 4;
		}
		printf("In process %d, the value of n is %d\n", processNo, n);
		sleep(2);
	}

	return 0;
}
