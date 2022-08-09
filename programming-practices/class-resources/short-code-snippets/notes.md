### 1. Use the ps, ps lx, ps tree and ps -aux command to display the process attributes.

#### Note that, the implementation of ps might differ from system to system. also it accepts options in multiple styles(BSD, UNIX etc.) mixed in the same command but conflict can occur. so better to read man pages of ps in the system more "source of truth".

- `ps`: gives a snapshot of the current processes
- some options(if `-` or `--` is req. then it will be mentioned)
	- `l`: long format
	- `x`: lists all processes owned by the user who has called `ps`(user with EUID of `ps`). so it also includes those processes that are not attached to any terminal.
	- `a`: lists all processes of all users.
	- `j`: an output format. BSD job control format.
	- `f`: again related to output format. it is an "output format modifier" and adds process hierarchy info. visually using a tree like diagram.
	- `u`: displays the process's owner(user)


- `fork()`
	- creates a "child" process.
	- both the child and parent(which has called `fork()`) run concurrently(?)
	- it can return following 3 kinds of integers.
		- a negative number: to parent when creation of child was unsuccessful
		- zero: to child
		- positive number: to parent, which indicates the pid of child
		

		
- General Note

	- `int* p = &a;`, here p is storing the virtual address of a.
	- file descriptor table: an in-memory data-structure. every process has its own fd table. This is an array where every cell contains a fd entry.
	- when a process is created then it is given 3 fd entry. they are located at 0(stdin), 1(stdout), 2(stderr). all of this fd entry point to a file located at `/dev/tty`