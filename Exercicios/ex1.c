#include <stdio.h>

int main(){
	int n1, n2, n3, n4, s;
	
	printf("Informe quatro numeros, em sequencia:\n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	s = n1 + n2 + n3 + n4;
	
	printf("Resultado da soma: %d\n", s);
}
