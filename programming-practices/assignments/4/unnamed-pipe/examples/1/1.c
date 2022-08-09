#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
	int fd[2];
	char buf[30];

	// create a pipe. use array `fd` for storing the file descriptors.
	if (pipe(fd) == -1) {
		printf("Unable to create a pipe.\n");
		exit(1);
	}

	if (!fork()) {
		printf("Child: writing to pipe...\n");
		write(fd[1], "Hello my parent", 15);
		printf("Child: done writing. exiting...\n");
		exit(0);
	} else {
		printf("Parent: reading from the pipe...\n");
		read(fd[0], buf, 15);
		printf("Got the data \"%s\" from the child\n", buf);
		wait(NULL);
		printf("Parent: exiting...\n");
	}

	return 0;
}
