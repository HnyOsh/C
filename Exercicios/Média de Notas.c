#include <stdio.h>

int main(){
	float notas[5];
	float soma = 0;
	float media;
	int i;
	
	
	for(i=0;i<5;i++){
		printf("Digite a nota do aluno %d:\n", i+1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	
	media = soma / 5;
	
	printf("Media das notas: %.1f\n", media);
	printf("Notas acima da media:\n");
	
	for(i=0;i<5;i++){
		if(notas[i] > media){
			printf("- %.1f\n", notas[i]);
		}
	}
	
	return 0;
}
