#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<locale.h>

int main(void) {
		setlocale(LC_ALL, "Portuguese");
		long int midi_chlorians;
		int ciclo, i;
		printf("Digite o valor inicial de midi-chlorians\n");
		scanf("%li", &midi_chlorians);
		printf("Digite a quantidade de ciclos de treinamento\n");
		scanf("%i", &ciclo);
		for (i = 1; i <= ciclo; i++) {
			if (i%2 != 0) {
				midi_chlorians *= 2;
			}
			else {
				midi_chlorians += 1000;
			}
		}
		printf("Após %d ciclos de treinamento o Jedi terá %d midi-chlorian\n", ciclo, midi_chlorians);
		if (midi_chlorians < 100000 ) {
			printf("Ainda é um Padawan, precisa continuar treinando...\n");
		}
		else if (midi_chlorians < 1000000)
		{
			printf("Já é um Cavaleiro Jedi, poderá participar de missões de campo como gerreiro da Ordem...\n");
		}
		else {
			printf("Parabéns novo Mestre Jedi, você agora é responsável pelos jovens Padawans...\n");
		}
	printf("\n\n");
	system("pause");
	return(0);
}


