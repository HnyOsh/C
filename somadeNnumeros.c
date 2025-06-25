#include <stdio.h>

int main(){
	
	int contador = 0, totalNumeros, numero, soma = 0;
	
	printf("Quantos numeros voce quer somar?\n");
	scanf("%d", &totalNumeros);
	
	while(contador < totalNumeros) {
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		soma += numero;
		contador++;
	}
	
	printf("Soma total: %d\n", soma);
	
	return 0;
}
