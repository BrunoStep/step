#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char*str1 = NULL;
	char*str2 = NULL;

	str1 = (char*)malloc(11);
	strcpy(str1, "ABCDEFGHIJK");

	str2 = (char*)realloc(str2,20);

	printf("Endereço de str1: %p\n", str1);
	printf("Endereço de str2: %p\n", str2);

	str1 = (char*)realloc(str1, 100);

	printf("Novo endereço de str1: %p\n", str1);
	printf("Conteudo de str1: %s\n", str1);
	printf("Endereço de str2: %p\n", str2);

	free(str1);
	free(str2);
	return 0;



}
/*_CRT_SECURE_NO_WARNINGS. See online help for details.
1>c:\program files (x86)\windows kits\10\include\10.0.16299.0\ucrt\string.h(132): note: see declaration of 'strcpy'*/