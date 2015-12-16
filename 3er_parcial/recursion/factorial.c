#include <stdio.h>
int factorial (int numero);

void main (){
	int numero;
	printf ("Introduce un numero entero\n");
	scanf("%d", &numero);
	printf("El factorial de %d es &d", numero, factorial(numero);
}

int factorial (int numero) 
{
	if ( numero <=  0 )
		return 1;
	else
	return numero * factorial(numero -1);
}

