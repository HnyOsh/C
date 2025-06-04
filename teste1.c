#include <stdio.h>

#define texto "Seja bem vindo"

int main(){
	printf("%s\n", texto);
	
	char nome[50] = "";
	int idade = 0;
	float peso = 0.0;
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o seu peso:\n");
	scanf("%f", &peso);
	
	printf("Dados Cadastrados:\n");
	printf("Nome:%s.\n", nome);
	printf("Idade:%d.\n", idade);
	printf("Peso:%.2f.\n", peso);
	
}
