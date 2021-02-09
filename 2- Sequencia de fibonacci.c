#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, fibona1 = 0, fibona2 = 1, fibona3, i ;
	
	printf ("\n Digite um número a ser tranformado na sequência de fibonacci..: ") ;
	scanf ("%d", &numero) ;
	
	printf ("\n") ;
	
	if (numero < 0)
	{
		printf ("\n Número invalido") ;
	}
	else
	{
		for (i = 1; i <= numero; i++) // O 'i' precisa ser 1, porque o primeiro ciclo dentro do primeiro if tem que dar 0.
		{
			if (i == 1) // No primerio ciclo o primeiro valor é 0.
			{
				printf ("%d \n", fibona1) ; 
			}
			
			else if (i == 2) // No segundo ciclo o segundo valor é 1.
			{
				printf ("%d \n", fibona2) ;
			}
			
			else
			{
				fibona3 = fibona1 + fibona2 ; // No terceiro ciclo se normaliza.
				fibona1 = fibona2 ;
				fibona2 = fibona3 ;
				
				printf ("%d \n", fibona3) ;
			}
		}
	}
	
	return 0 ;
	system ("pause") ;
}
