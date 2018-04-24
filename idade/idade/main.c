#include<stdio.h>

int main() {
	int idade = 25;
	int*ponteiro_idade;
	ponteiro_idade = &idade;

	printf("%d,%p\n", idade, &idade);

	printf("%p,%d\n", ponteiro_idade, *ponteiro_idade);
}