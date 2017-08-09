#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");	
	
	/*
	// uso do if aninhado.
	int p,i;
	printf("Digite um numero par e outro impar: ");
	scanf("%i %i",&p,&i);
	
	if(p>i) 
	{
		printf("Variável par é maior que impar");
	}
	else if (p<i)
	{
		printf("Variável Ímpar é maior que par");
	}
	else
	{
		printf("O Valor par e ímpar são iguais");
	}
	*/
	
	/*
	// uso do operador lógico && (E)
	int Vas,Flu,Bot;
	printf("Digite a quantidade de títulos de cada um dos times: ");
	scanf("%i %i %i",&Vas,&Flu,&Bot);
	
	if((Vas>Flu) && (Vas>Bot))
	{
		printf("\nO Vasco tem mais títulos que o Fluminense e o Botafogo");	
	}
	else if((Flu>Vas) && (Flu>Bot))
	{
		printf("\nO Fluminense tem mais títulos que o Vasco e o Botafogo");	
	}
	else
	{
		printf("\nO Botafogo tem mais títulos que o Fluminense e o Vasco");	
	}
	*/
	
	/*
	// uso do operador lógico || (OU)
	float Vas,Flu,Bot,Fla;
	printf("Digite a quantidade de Likes de cada um dos times Cariocas: ");
	scanf("%f %f %f %f",&Fla,&Vas,&Flu,&Bot);
	
	if((Fla>Vas) || (Fla>Flu) || (Fla>Bot))
	{
		printf("\nA Página do Flamento tem mais Likes que os demais times cariocas");	
	}
	else
	{
		printf("\nAlgum rival de Flamento tem mais Likes");	
	}
	*/
	
	int Flamengo=0,Corinthians=1;
	if(Flamengo!=Corinthians)
	{
		printf("Um dos dois times já foi rebaixado, pois um deles tem um valor diferente de 0");
	}
	else if(Flamengo=Corinthians)
	{
		printf("Os dois times nunca foram rebaixados, pos os valores é zero");
	}
	
getchar();
printf("\n\n");
system("pause");
return(0);

}
