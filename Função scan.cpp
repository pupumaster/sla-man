#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base;
	int altura;
	int area;
	
	printf ("Digite o valor da base:");
	scanf ("%i", &base);
    
	printf ("Digite o valor da altura:");
	scanf ("%i", &altura);
	 
	area = base * altura;
	 
	printf ("A �rea do ret�ngulo � = %i", area);









	

return 0;	
}
