#include <stdio.h>



int main (){
	
	int idade;
	
	printf  ("Sua idade:\n");
	scanf ("%i", &idade);
	
	if (idade < 18)
		printf ("Criança\n");
		
	else if (idade >= 18 && idade < 60)
		printf ("Adulto\n");
		
	else if (idade >= 60 && idade < 100)
		printf ("Idoso\n");
	
	else
		printf("Vc esta morto\n");
	
	
	
	
	
	
	
	
	return 0;
}
