#include <stdio.h>
#include <string.h>
#define TAM_NOME 50


typedef unsigned short int idade;
typedef double salario;
enum  sexo_t {
	M = 0, F = 1
};
typedef enum sexo_t sexo;	



 struct pessoa_t {
	char m_nome[TAM_NOME + 1];
	idade m_idade;
	salario m_salario;
	sexo m_sexo;

};
 typedef struct pessoa_t pessoa;

int main() {
	pessoa p1;
	p1.m_idade = 26;
	strcpy(p1.m_nome, "OLAVO");
	p1.m_salario = 8976.45;
	p1.m_sexo = M;

	printf("As caracteristcias sao: \nidade: %d, \nnome: %s,\nsalario: %f, \nsexo: %s",p1.m_idade, p1.m_nome,p1.m_salario,(p1.m_sexo==M?"masculino":"feminino"));
	return 0;
	
	

}