#include <stdint.h>
#include <stdio.h>

int main() {
	
	int estacoes[4] = { 21,32,43, 54 };
	for (int i=0; i < 4 ; i++) {
		printf("Os valores %d\n", estacoes[i]);
	}
	
	for (int *j = estacoes; j!=(estacoes+4); ++j) {

		printf("Endereco= %p, valor= %d\n", j, *j);
		
	}
	return 0;
	




	
}