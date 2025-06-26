#include <stdio.h>
#include <string.h> // Para strcmp()

int main(){
	
	char login[20];
	int senha;

	do {
		printf("Login:\n");
		scanf("%s", login);

		printf("Senha:\n");
		scanf("%d", &senha);

		if(strcmp(login, "Henry") != 0 || senha != 1995){
			printf("Login ou senha incorretos. Tente novamente.\n");
		}

	} while(strcmp(login, "Henry") != 0 || senha != 1995);
	
	printf("Acesso concedido!\n");
	
	return 0;
}

