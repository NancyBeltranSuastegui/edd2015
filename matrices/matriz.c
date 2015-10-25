#include <stdio.h>

int main(){

 	float arreglo_1[3][3], arreglo_2[3][3], multi[3][3];
	int con_1, con_2, con_3;

	printf ("Introduce los elementos para la matriz 1\n");
		for (con_1 = 0; con_1 < 3; con_1++){
			for (con_2 = 0; con_2 < 3; con_2++){
				printf ("Introduce el dato de la columna %d de la fila %d\n", con_2 + 1, con_1 + 1);
				scanf ("%f", &arreglo_1[con_2][con_1]);
			}
		}

	printf ("La matriz 1 es: \n");
	for (con_1 = 0; con_1 < 3; con_1++){
		printf("[");
		for (con_2 = 0; con_2 < 3; con_2++){
			printf("%.2f, ", arreglo_1[con_2][con_1]);
		}
		printf("]\n");
	}

	printf ("Introduce los elementos para la matriz 2\n");
		for (con_1 = 0; con_1 < 3; con_1++){
			for (con_2 = 0; con_2 < 3; con_2++){
				printf ("Introduce el dato de la columna %d de la fila %d\n", con_2 + 1, con_1 + 1);
				scanf ("%f", &arreglo_2[con_2][con_1]);
			}
		}

	printf ("La matriz 2 es: \n");
	for (con_1 = 0; con_1 < 3; con_1++){
		printf ("[");
		for (con_2 = 0; con_2 < 3; con_2++){
			printf ("%.2f, ", arreglo_2[con_2][con_1]);
		}
	printf ("]\n");
	}


	for (con_1 = 0; con_1 < 3; con_1++){
		for (con_2 = 0; con_2 < 3; con_2++){
			multi[con_2][con_1] = 0;
			for (con_3 = 0; con_3 < 3; con_3++){
				multi[con_2][con_1] = multi[con_2][con_1] + arreglo_1[con_3][con_1] * arreglo_2[con_2][con_3];
			}
		}
	}

	printf ("El resultado de la multiplicacion de matrices es: \n");
	for (con_1 = 0; con_1 < 3; con_1++){
		printf ("[");
		for (con_2 = 0; con_2 < 3; con_2++){
			printf ("%.2f, ", multi[con_2][con_1]);
		}
		printf ("]\n");
	}

	return 0;
}
