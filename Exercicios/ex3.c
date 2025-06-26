#include <stdio.h>

int main(){
	printf("Calculadora de Hora e Minutos\n");
	
	float seg, min, hr;
	
	printf("Insira o tempo em segundos:\n");
	scanf("%f", &seg);
	
	printf("Segundos: %.2f\n", seg);
	
	min = seg / 60;
	printf("Minutos: %.2f\n", min);
	
	hr = min / 60;
	printf("Horas: %.2f\n", hr);
	
	
}
