#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");	
	
	//Usando While
	int numero=1;
	while(numero <= 10)
	{
		printf("\nnumero = %d",numero++);
	}
	
	// Usando Do While
	int numero2=1;
	do
	{
		printf("\nnumero = %d",numero2++);
	}while(numero2 <=10);
	
	// Usando For
	int numero3;
	for(numero3=1;numero3<=10;numero3++)
	{
		printf("\nnumero = %d",numero3);
	}

getchar();
printf("\n\n");
system("pause");
return(0);

}
