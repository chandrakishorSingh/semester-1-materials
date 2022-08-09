# pthread_create

- params
	- pthread_t * thread: it is a pointer to an unsigned integer value that represents the thread id of the specified thread
	- const pthread_attr_t * attr: a pointer to a structure that defines various thread attributes like scheduling policy, stack address, etc. default is NULL
	- void * (*start_routine)(void *): pointer to a routine which is used by the thread to start the execution. its return type and argument type is void *. so essentially, it return and accept any type of data
	- void *arg: a pointer of type void* that contains the arguments to the function defined in previous parameter.

# pthread_join

- params
	- pthread_t th: the id of the thread for which the current thread should wait
	- void **thread_return: pointer to the location where the exit status of the thread(defined in previous parameter) is stored.

# to exec. pthread program

- g++ -pthread file.cpp
