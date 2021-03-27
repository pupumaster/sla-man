#include <stdio.h>
#include <conio.h>
#include <locale.h>

	int main ()
	{	
		int idade;
		setlocale(LC_ALL, "Portuguese");
		
		printf ("Insira sua idade:");
		scanf ("%i", &idade);
		
		int meses;
		meses = idade * 12;
		
		int semanas;
		semanas = idade * 52;
		
		printf(" Você tem %i meses ,ou %i semanas, de idade", meses, semanas);	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
	}
