#include <stdio.h>

int main(){
	
	int idade, convite, vip;
	
	printf("Verificador de Entrada\n");
	printf("Obs: Menores de 18 anos so com entrada VIP\n");
	
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
	printf("Tem convite? (1-Sim, 0-Nao)\n");
	scanf("%d", &convite);
	
	printf("Esta na lista VIP? (1-Sim, 0-Nao)\n");
	scanf("%d", &vip);
	
	if((idade >= 18 && convite == 1) || vip == 1){
		printf("Entrada Permitida!\n");
	} else {
		printf("Entrada Nao Permitida!\n");
	}
	
	return 0;
}
