
/*
 *	Programa de exemplo de uso da biblioteca cthread
 *
 *	Vers�o 1.0 - 14/04/2016
 *
 *	Sistemas Operacionais I - www.inf.ufrgs.br
 *
 */

#include "../include/support.h"
#include "../include/cthread.h"
#include <stdio.h>

/*
void* func0(void *arg) {
	printf("Eu sou a thread ID0 imprimindo %d\n", *((int *)arg));
	return 0;
}

void* func1(void *arg) {
	printf("Eu sou a thread ID1 imprimindo %d\n", *((int *)arg));
    return 0;
}*/

int main(int argc, char *argv[]) {

	/*int	id0, id1;
	int i;

	id0 = ccreate(func0, (void *)&i, 0);
	id1 = ccreate(func1, (void *)&i, 0);

	printf("Eu sou a main ap�s a cria��o de ID0 e ID1\n");

	cjoin(id0);
	cjoin(id1);*/

	printf("Eu sou a main voltando para terminar o programaajasnajnajsnajnsjasnajsn\n");

	char teste  = 't';
	printf("aloooooooọ00000000000000000000000000000000000000000000000");
	cidentify(&teste, 100);
	printf("aloooooooọ111111111111111111111111111111111111111111");
	csem_t *semaphore;
	printf("aloooooooọ");
	int result = csem_init(semaphore, 100);
	printf("aloooooooọ22222222222222222222222222222222222222222222222222222");
	printf("Resultado inicializacao do semaforo =");
	
	return 0;

}

