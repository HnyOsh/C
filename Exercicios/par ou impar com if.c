#include <stdio.h>

int main(){
	long long int num;
	
	printf("Digite um valor para descobrir se ele e par ou impar:\n");
	scanf("%lld", &num);
	
	if(num % 2 != 0){
		printf("O numero %lld e impar.\n", num);
	} else {
		printf("O numero %lld e par.\n", num);
	}
	
	return 0;
}
