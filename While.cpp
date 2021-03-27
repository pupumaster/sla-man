#include <stdio.h>
#include <conio.h>
#include <locale.h>


	int main()
	{
		
	setlocale(LC_ALL, "Portuguese");


 	int contador = 1;
 	
	while (contador < 9) {
		
		printf ("%i\n", contador);
		++contador;
	}

return 0;
}
