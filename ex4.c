#include <stdio.h>
#include <stdlib.h>

int main(){

	printf("Mostrando o maior numero\n");
	
	int n1, n2;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
		
	if(n1 > n2){
		printf("O maior e %d.\n", n1);
	} else if(n1 < n2) {
		printf("O maior e %d.\n", n2);
	} else{
		printf("Os numeros sao iguais.\n");
	}
	
	return 0;
}
