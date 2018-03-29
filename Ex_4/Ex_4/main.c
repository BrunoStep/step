#include <stdint.h>
#include <stdio.h>



int main() {

	int estacoes[4] = { 21,32,43, 54 };
	for (int i = 0; i < 4; i++) {
		printf("Os valores %d\n", estacoes[i]);
	}

	for (int *j = estacoes; j != (estacoes + 4); ++j) {

		printf("Endereco= %p, valor= %d\n", j, *j);

	}
	int tam = 4;

	int Percorre_matriz(int *estacoes, int tam, int(*f)(int *estacoes, int tam));
		
	for (int *p = estacoes; p != (estacoes + tam); ++p) {
		f(estacoes, tam);
		printf("%d", Percorre_matriz);

		
	}
	return 0;

	

}
int Percorre_matriz(int *estacoes, int tam) {
	return 4;
	
}


