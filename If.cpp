#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf ("Informe sua idade:\n");
	scanf ("%i", &idade);
	
	if (idade < 18){
		printf ("Voc� n�o tem permiss�o para acessar:");
				
	} else {
		printf ("Veja porn� � vontade ");
				
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
