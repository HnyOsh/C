#include <stdio.h>

int main(int argc, char *argv[]) {

float salario, per, aumento, novosalario;

printf("Calculadora de Salario\n");

printf("Insira o salario:\n");
scanf("%f", &salario);

printf("Insira o percentual de aumento:\n");
scanf("%f", &per);

aumento = salario * (per / 100);
printf("Valor do aumento: %.2f\n", aumento);

novosalario = salario + aumento;
printf("Novo salario: %.2f\n", novosalario);

}
