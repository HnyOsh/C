/*Fazer um programa que receba o salário de um funcionário
e o percentual de aumento, calcule e mostre o valor do
aumento e o novo salário*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

float salario, per, aumento, novosalario;

printf("Calculadora de Salario\n");

printf("Insira o salario:\n");
scanf("%f", &salario);

printf("Insira o percentual de aumento:\n");
scanf("%f", &per);

aumento = salario * (per / 100);
printf("Valor do aumento: %.2f\n", aumento);

novosalario = salario + per;
printf("Novo salario: %.2f\n", novosalario);

}
