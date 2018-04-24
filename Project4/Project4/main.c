#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	/* ponteiro para mem�ria que ser� alocada */
	int *p;
	int i;

	/* alocar 10 elementos inteiros, ou seja, ( sizeof (int) * 10 ) */
	p = (int *)malloc(sizeof(int) * 10);

	if (p == NULL) {
		printf("Erro: N�o foi possivel alocar mem�ria\n");
		exit(1);
	}

	for (i = 0; i < 10; i++) {
		p[i] = i * 2;
		printf("%d\n", p[i]);
	}

	/* libera a mem�ria alocada por malloc */
	free(p);

	return 0;
}