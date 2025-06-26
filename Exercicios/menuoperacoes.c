#include <stdio.h>

int main(){
	
	int menu, n1, n2, res;
	
	printf("Menu de Operacoes\n");
	printf("Digite o primeiro valor:\n");
	scanf("%d", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &n2);
	printf("Escolha a sua opcao:\n");
	printf("1- Soma, 2- Subtração, 3- Verificar se os dois numeros sao iguais\n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			res = n1 + n2;
			printf("Soma\n");
			printf("%d + %d = %d", n1,n2,res);
			break;
		case 2:
			res = n1 - n2;
			printf("Subtracao\n");
			printf("%d - %d = %d", n1,n2,res);
			break;
		case 3:
			if(n1 == n2){
				printf("Os valores sao iguais.\n");
			} else {
				printf("Os valores nao sao iguais.\n");
			}
			break;
		default:
			printf("Opcao Invalida\n");
			break;
	}
	
	return 0;
}
