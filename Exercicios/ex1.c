#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, s;
	
	printf("Informe quatro numeros, em sequencia:\n");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	s = n1 + n2 + n3 + n4;
	
	printf("Resultado da soma: %d\n", s);
	
	return 0;
}
