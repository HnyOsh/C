#include <stdio.h>

int main(){
	int n1, num, tab;
	
	printf("Tabuada\n");
	printf("Digite um valor para saber a tabuada:\n");
	scanf("%d", &n1);
	printf("Tabuada do numero %d\n", n1);
	
	for(num=1;num<=10;num++){
		tab = num * n1;
		printf("%d * %d = %d\n", n1, num, tab);
	}
}
