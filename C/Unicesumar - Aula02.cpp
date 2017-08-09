#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

/*Exemplo1 - Operadores
int main(void)
{
	int x, y;
	x = 10;
	y = 5;
	y+= x; // y = y + x
	printf("X = %d\nY = %d\n",x,y);
getchar();
printf("\n\n");
system("pause");
return(0); */
//Funções intrinsicas 
int main(void)
{
	char nome[64];
	int anonascimento, idade;
	float altura;
	
	printf("Digite o nome: ");
	scanf("%s", nome);
	printf("Ano de Nascimento: ");
	scanf("%d", &anonascimento);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	idade = 2017-anonascimento;
	printf("%s possui %d anos e %.2f de altura",nome,&idade,&altura);
}
