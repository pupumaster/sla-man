#include <stdio.h>
#include <conio.h>
#include <locale.h>


	int main()
	{
		
	setlocale(LC_ALL, "Portuguese");
	
	
	int fatorial; 
	int resposta = 1;

	printf ("Insira o n�mero:");
	scanf ("%i", &fatorial);
		
	for (;fatorial>=1; --fatorial){
		
		resposta *= fatorial;
			
	}
	
	printf (" O fatorial � %i", resposta);

return 0;
}
