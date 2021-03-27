#include <stdio.h>
#include <math.h>

int main ()
{

//Variaveis a,b,c
	float n1; //a
	float n2; //b
	float n3; //c
	
	/* É importante lembrar que
	o programa nn considera raízes imaginarias*/
	 
	//Inserir o primeiro valor
	printf("Insira o valor de a.\n");	
	scanf ("%f", &n1);
	
	//condição de existencia
		if (n1 != 0)
	{
		//Inserir os outros valores
		printf ("Insira o valor de b.\n");
		scanf ("%f", &n2);
		printf ("Insira o valor de c.\n");
		scanf ("%f", &n3);
	
	//Variaveis responsaveis pelo calculo
		float delta = (n2*n2) - (4*n1*n3);
		float raiz = sqrt(delta);
		float r1 = (-n2 + raiz) / (2 * n1);
		float r2 = (-n2 - raiz) / (2 * n1);
	
	//resultado
		printf("%f, %f", r1, r2);			
}	
	else //contra existencia  
		printf ("O valor de a deve ser diferente de ZERO.\n");
			


return 0;
}
