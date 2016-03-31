#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>
void *slowprintf(void *arg){
	
	char*msg;
	int i;
	msg=(char*)arg;	

	for(i=0;i<strlen(msg);i++){
		printf("%c\n",msg[i]);
		fflush(stdout);
		usleep(1000000);
	}
}
int main(int argc,char** argv){
	pthread_t h1;
	pthread_t h2;
	char* Hello=*(argv+1);
	char* World=*(argv+2);
	
	pthread_create(&h1,NULL,slowprintf,(void*)Hello);
	pthread_create(&h2,NULL,slowprintf,(void*)World);
	pthread_join(h1,NULL);
	pthread_join(h2,NULL);
	printf("\n");
}
