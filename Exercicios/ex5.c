#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("Calculadora\n");
	
	int opc;
	float n1, n2, soma, sub, mult, div;
	
	printf("Digite 1 para somar\n");
	printf("Digite 2 para substrair\n");
	printf("Digite 3 para multiplicar\n");
	printf("Digite 4 para dividir\n");
	
	printf("Qual opcao voce deseja ?\n");
	scanf("%d", &opc);
	
	printf("Insira o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Insira o segundo valor:\n");
	scanf("%f", &n2);
	
	if(opc == 1){
		soma = n1 + n2;
		printf("%.1f + %.1f = %.1f", n1, n2, soma);
	} else if (opc == 2){
		sub = n1 - n2;
		printf("%.1f - %.1f = %.1f", n1, n2, sub);
	} else if (opc == 3){
		mult = n1 * n2;
		printf("%.1f * %.1f = %.1f", n1, n2, mult);
	} else if (opc == 4){
		div = n1 / n2;
		printf("%.1f / %.1f = %.1f", n1, n2, div);
	} else {
		printf("Opcao Invalida");
	}
	
	return 0;
}
