#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<locale.h>

int main(void)
{
	setlocale(LC_ALL,"portuguese");	
	
	int x;
	
	for(x=1;x<=10;x++) 
	{
		printf("\nÍndice na posição %i",x);
	}
getchar();
printf("\n\n");
system("pause");
return(0);

}
