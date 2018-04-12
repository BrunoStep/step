#include <stdio.h>
#include <string.h>
#define TAM_NOME 50
#define ok 1


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

 int inicializa_pessoa(pessoa*p2, const char *p_nome[TAM_NOME + 1], idade p_idade, salario p_salario, sexo p_sexo) {
	 if (p2 == NULL) {
		 return-1;
	 }
	 if (p_sexo != M || p_sexo != F) {
		 return-2;
	 }
	 if (p_idade < 18) {
		 return-3;
	 }
	 if (p_idade > 95) {
		 return -4;
	 }
	 if (p_salario > 50000) {
		 return-5;
	 }

	 if (p_salario < 500) {
		 return-6;
	 }
	 if (strlen((p_nome) > TAM_NOME)) {
		 return-7;
	 }
	 p2->m_idade = p_idade;
	 strcpy(p2->m_nome, p_nome);
	 p2->m_salario = p_salario;
	 p2->m_sexo = p_sexo;
	 return 1;
	 
	  }




int main() {
	pessoa p1;
	inicializa_pessoa(&p1, "Bruno", 38, 85.00, M);



	/*p1.m_idade = 26;
	strcpy(p1.m_nome, "OLAVO");
	p1.m_salario = 8976.45;
	p1.m_sexo = M;
*/

	

	printf("As caracteristcias sao: \nidade: %d, \nnome: %s,\nsalario: %f, \nsexo: %s",p1.m_idade, p1.m_nome,p1.m_salario,(p1.m_sexo==M?"masculino":"feminino"));
	return 0;
	
	

}