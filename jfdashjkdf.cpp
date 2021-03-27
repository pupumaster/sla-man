#include <stdio.h>

int main () 
{

	int idade;
	
	printf ("Qual sua idade?\n");
	scanf ("%i", &idade);
	
	if (idade < 18)
		printf ("Ve se cresce mlk\n");
	else {
		printf ("Tu e pika maluco.\n");
	}

return 0;
}
