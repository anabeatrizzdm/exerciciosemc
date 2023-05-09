#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10
 
int main() {
	printf("Structs\n");
 
	struct Aluno{
		char nome[40];
		int matricula;
		int idade;
	};
 
	struct Aluno aluno[TAM]; 
 	
 	for(int i = 0; i < TAM; i++){
 		printf("Digite o nome do %i estudante:", i+1);
 		scanf("%s", &aluno[i].nome);
 		printf("Digite a matricula do %i estudante: ", i+1);
 		scanf("%i", &aluno[i].matricula);
 		printf("Digite a idade do %i estudante: ", i+1);
 		scanf("%i", &aluno[i].idade);
		do{
		printf("Digite a idade do %i estudante: ", i+1);
 		scanf("%i", &aluno[i].idade);
 		fflush(stdin);
		}while(aluno[i].idade < 18 || aluno[i].idade > 80);
	}
	
	return 0;
}
