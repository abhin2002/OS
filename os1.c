#include <stdio.h>
#include <pthread.h>

void printMsg(char* msg)
{
	printf("Thread id is %d\n",msg);
}

int main(int argc,char** argv)
{
	pthread_t thrdID;
	
	printf("crerating a new thread\n");
	pthread_create(&thrdID, NULL, (void*)printMsg, argv[]);
	printf("created thread %d\n",thrdID);
	pthread_join(thrdID, NULL);
	
	return 0;
}
