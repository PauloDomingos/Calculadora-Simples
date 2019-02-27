#include <iostream>
#include <stdio.h>
#include <math.h>


int main() 
{
	//system("cls");
	int A=0;
	printf("informe um numero inteiro A\n");
	scanf("%i", &A);
	int B=0;
	printf("informe um numero inteiro B\n");
	scanf("%i", &B);
	int C=0;
	printf("INFORME A OPERACAO\n adicao=1\n subtracao=2\n divisao=3\n multiplicacao=4\n");
	scanf("%i", &C);
	
	if (C==1)
	{
		C=A+B;
		printf("O resultado e: %i", C);
	}
	else
	if (C==2) 
	{
		C=A-B;
		printf("O resultado e: %i", C);
	}
	else
	if (C==3)
	{
		C=A/B;
		printf("O resultado e: %i", C);
	}
	else
	if (C==4)
	{
		C=A*B;
		printf("O resultado e: %i", C);

	}
	return 1;
}

	
