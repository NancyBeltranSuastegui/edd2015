#include <stdio.h>

long fibonacci(int n);

int main()
{
	int termino, k;
	do{
		printf ("introdusca el numero de terminos:  ");
		scanf ("%d", &termino);
	}while (termino <=1 );

	puts ("serie de numero fibonacci")
	printf ("0 1 ");

	for (k = 2; k <= termino; k++){
		printf ("%ld%c", fibonacci(k), (k%7==0 ?'\n':' '));
	}

	return 0;
}

long fibonacci(int n)
{
	if (n == 0 || n = 1)
	return n;

	else
		return fibonacci (n - 2) + fibonacci (n - 1);
}
