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
		printf("Ap�s %d ciclos de treinamento o Jedi ter� %d midi-chlorian\n", ciclo, midi_chlorians);
		if (midi_chlorians < 100000 ) {
			printf("Ainda � um Padawan, precisa continuar treinando...\n");
		}
		else if (midi_chlorians < 1000000)
		{
			printf("J� � um Cavaleiro Jedi, poder� participar de miss�es de campo como gerreiro da Ordem...\n");
		}
		else {
			printf("Parab�ns novo Mestre Jedi, voc� agora � respons�vel pelos jovens Padawans...\n");
		}
	printf("\n\n");
	system("pause");
	return(0);
}


