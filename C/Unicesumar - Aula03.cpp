#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

float media(float a, float b){
		return (a + b) / 2;
}

int main(void){
	float vmedia = media(8,7);
	printf("O Resultado é: %.2f", vmedia);
	printf("\n\n");
	system("pause");
	return(0);
}

/*
int main(void)
{
	int x = 1000;
	int y = 500;
	y-= x++;
	printf("x = %d \t y = %d\n", x, y);
	getchar();
	return(0);
} */



