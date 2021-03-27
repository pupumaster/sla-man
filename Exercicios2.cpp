#include <stdio.h>

int main () 
{

 int num1;
 int num2;
 int resultado;
 
 	printf ("Digite o primeiro numero.\n");
 	scanf ("%i", &num1);

 	printf ("Digite o segundo numero.\n");
 	scanf ("%i", &num2); 

	
	if (num2 == 0)
	printf ("Não da pra dividir por zero,Burro.\n");
	else
	 {
	 	// % na conta significa resto da divisão
	 	if (num1 % num2 == 0)
		printf ("%i e divisivel por %i.\n", num1, num2);
		
		else
			printf("%i nao e divisivel por %i.\n", num1, num2);
	}
 	

















return 0;
}
