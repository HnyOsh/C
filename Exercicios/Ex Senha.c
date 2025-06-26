#include <stdio.h>
#include <stdlib.h>

int main(){
	int senha;
	
	do {
		printf("Digite a senha: ");
		scanf("%d", &senha);
	} while(senha != 1234);
	
	printf("Senha Correta!\n");
	
	return 0;
}
