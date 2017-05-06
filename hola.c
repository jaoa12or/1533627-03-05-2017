#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>



void *imprimir(void*);

int main(int argc, char *argv[]) {
	pthread_t tid;
	int j;

	for (j = 0; j < 10; j++)
 	{
		pthread_create(&tid, NULL, imprimir, NULL);
		
	}	
	
	return 0;
}

void *imprimir(void *null) {

	long ide = pthread_self();
	printf(" hola %ld\n", ide);
	pthread_exit(NULL);
}       
