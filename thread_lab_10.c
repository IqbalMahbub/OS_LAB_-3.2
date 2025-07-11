#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_function(void *arg){

	printf("Inside Thread\n");
	
}

int main(){

	pthread_t a_thread;
	pthread_creat(&a_thread,NULL,thread_function,NULL);
	pthread_join(a_thread,NULL);
	printf("Inside main program\n");
	for(j=20;j<25;j++){
		printf("%d\n\n",j);
		sleep(1);

	}


}
