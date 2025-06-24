#include <stdio.h>

int main(){
	
	int menu;
	int n1, n2, res;
	
	printf("Calculadora\n");
	printf("Digite o primero valor:\n");
	scanf("%d", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &n2);
	printf("Escolha uma Opcao:\n");
	printf("1- Soma, 2- Subtracao,3- Multiplicacao, 4- Divisao\n");
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
			res = n1 * n2;
			printf("Multiplicacao\n");
			printf("%d * %d = %d", n1,n2,res);
			break;
		case 4:
			res = n1 / n2;
			printf("Divisao\n");
			printf("%d / %d = %d", n1,n2,res);
			break;
		default:
			printf("Opcao Invalida!");
			break;
	}
}
