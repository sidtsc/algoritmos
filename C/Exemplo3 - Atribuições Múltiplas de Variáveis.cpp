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
	int a=10;
	printf("\n%i",a%2);  // resto da divis�o por 2
	printf("\n%i",a%3);  // resto da divis�o por 3
	printf("%i %i %i %i %i",a+2,a-2,a*2,a/2,a%2); // todos os c�lculos na mesma linha.
	
	//uso do scanf
	int b;
	scanf("%i",&b);
	printf("\nO Valor Digitado foi %i",b);
	
	//lendo v�rias vari�veis com o scanf
	int c,d,e;
	scanf("%i %i %i",&c,&d,&e);
	printf("Os Valores digitados s�o: %i %i %i",c,d,e);
	
	//lendo v�rias vari�veis do tipo float com o scanf
	float f,g,h;
	scanf("%f %f %f",&f,&g,&h);
	printf("Os Valores digitados s�o: %f %f %f",f,g,h);
	
	//Float delimitando casas decimais
	float i;
	scanf("%f",&i);
	printf("Os Valores digitados s�o: %.2f",i);
	*/
	int a,b,c;
	a=b=c=210;
	
	scanf("%i",&b);
	printf("B = %i",b);
		
getchar();
printf("\n\n");
system("pause");
return(0);

}
