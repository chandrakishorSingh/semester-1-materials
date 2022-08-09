#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int fd[2];

	if (pipe(fd) == -1) {
		perror("Unable to create a pipe\n");
		exit(1);
	}

	if (!fork()) {
		// standard output stream is closed
		close(1);
		// now the writing end of the pipe, fd[1], is the new standard output stream
		dup(fd[1]);
		// close the reading end of pipe as we are not reading anything from the pipe.
		close(fd[0]);
		// call `ls` command. it will write the result on the pipe.
		execlp("ls", "ls", NULL);
	} else {
		// close the standard input stream.
		close(0);
		// now reading end of pipe, fd[0], is the standard input stream
		dup(fd[0]);
		// close the writing end of the pipe as we want to output on standard stream
		close(fd[1]);
		execlp("wc", "wc", "-w", NULL);
	}

	return 0;
}
