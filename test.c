#include "philo.h"

// void *p_function(void *data)
// {
// 	pid_t pid; // process id
// 	pthread_t tid; // thread id
// 	char *thread_name;
	
// 	thread_name = (char *)data;

// 	pid = getpid(); // 4
// 	tid = pthread_self();

// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("thread name : %s, tid : %x, pid : %u\n"\
// 			, thread_name, (unsigned int)tid, (unsigned int)pid);
// 		sleep(1);
// 	}
// 	return (0);
// }

// int main()
// {
// 	pthread_t pthread[2];
// 	int thr_id;
// 	int status;

// 	char *p1 = "thread1";
// 	char *p2 = "thread2";
// 	char *p3 = "thread3 - main";

// 	sleep(1);
	
// 	thr_id = pthread_create(&pthread[0], NULL, p_function, (void *) p1); // 2
// 	if (thr_id < 0)
// 	{
// 		perror("pthread 0 error");
// 		exit(1);
// 	}
// 	thr_id = pthread_create(&pthread[1], NULL, p_function, (void *) p2); // 2
// 	if (thr_id < 0)
// 	{
// 		perror("pthread 1 error");
// 		exit(1);
// 	}
// 	p_function((void *) p3);

// 	pthread_join(pthread[0], (void **)&status); // 6
// 	pthread_join(pthread[1], (void **)&status); // 6

// 	printf("end?!?!?!?!\n");
// 	return (0);
// }

int num = 42;

void	error(char *msg)
{
	perror("fuck you");
	exit(1);
}

void *