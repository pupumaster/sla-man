#include <stdio.h>
#include <conio.h>
#include <locale.h>


	int main()
	{
		
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	//Não quero que apareça no cmd
	while ( i != 0 ){
		printf("teste\n");
	}
	//Quero que apareça no cmd
	do { 
		printf("teste 2\n");
	}while (i != 0);
return 0;
}
