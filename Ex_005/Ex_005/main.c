#include<stdio.h>
#define TAM 10
/*Crie uma fun��o gen�rica de percurso da matriz, chamada percorre, que recebe como par�metro uma fun��o do tipo void(*)(double*)*/

void percorre(double *matriz,int tam, void (*i) (double*)) {
	double*m = matriz + tam;
	for (int*p = m; p != m; ++p) {

	}
}
	
	

/* Crie uma fun��o f1 do tipo void(*)(double*) que deve mudar o sinal do double* se ele for negativo*/

void f1(double*i) {
	if (i < 0) {
		*i= -1 * (*i);
	}

}
/*Crie uma fun��o f2 do tipo void(*)(double*) que deve imprimir o valor do double* se ele for maior que 30*/
void f2(double*i) {
	if (*i > 30.0){
		printf("O valor ser� de: %lf", *i);

	}
	
}

/*Crie uma fun��o do tipo f3 do tipo void(*) e double(*) que deve imprimir o valor do double.*/
void f3(double*i) {
	printf("O valor ser� de: %lf", *i);
}

/*Crie uma fun��o main declare e defina uma matriz double de 10 elementos*/

/*Chame a fun��o percorre passando f3 como parametro*/

/*Chame a fun��o percorre passando f2 como parametro*/

/*Chame a fun��o percorre passando f1 como parametro*/


int main() {
	
	double matriz[TAM] = { 1,4,5,6,7,-12,14,16,-40,56 };
	
	percorre(matriz, TAM, f3);

	percorre(matriz, TAM, f2);

	percorre(matriz, TAM, f1);

	return 0;
	

	

}

