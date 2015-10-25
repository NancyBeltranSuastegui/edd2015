#include <stdio.h>
#include <stdlib.h>

int main(){

	float **arreglo_1, **arreglo_2, **resto;
	int con_1, con_2, con_3, fil, col;

	printf ("Multiplicacion de matrices n x n\n");
	printf ("Dame el numero de filas de la matriz\n");
	scanf ("%d", &fil);

	printf ("Dame el numero de columnas de la matriz\n");
	scanf ("%d", &col);

	if (fil == col){
		arreglo_1 = (float **) malloc (fil *sizeof(float *));
		for (con_1 = 0; con_1 < fil; con_1++){
			arreglo_1[con_1] = (float *) malloc (col *sizeof(float));
		}

		arreglo_2 =  (float **) malloc (fil *sizeof(float*));
                for (con_1 = 0; con_1 < fil; con_1++){
                        arreglo_2[con_1] = (float *) malloc (col *sizeof(float));
                }

		resto = (float **) malloc (fil *sizeof(float*));
                for (con_1 = 0; con_1 < fil; con_1++){
                        resto[con_1] = (float *) malloc (col *sizeof(float));
                }


		 printf ("Introduce los elementos para la matriz A\n");
        	        for (con_1 = 0; con_1 < fil; con_1++){
	                        for (con_2 = 0; con_2 < fil; con_2++){
                                	printf ("Introduce el dato de la columna %d de la fila %d \n", con_2 + 1, con_1 + 1);
                        	        scanf ("%f", &arreglo_1[con_2][con_1]);
                	        }
        	        }

		 printf ("Introduce los elementos para la matriz B\n");
        	        for (con_1 = 0; con_1 < fil; con_1++){
	                        for (con_2 = 0; con_2 < fil; con_2++){
                                	printf ("Introduce el dato de la columna %d de la fila %d \n", con_2 + 1, con_1 + 1);
                        	        scanf ("%f", &arreglo_2[con_2][con_1]);
                	        }
        	        }

		printf ("La matriz A es: \n");
		for (con_1 = 0; con_1 < fil; con_1++){
			printf("[");
			for (con_2 = 0; con_2 < fil; con_2++){
				printf("%.2f, ", arreglo_1[con_2][con_1]);
			}
			printf("]\n");
		}
		printf ("La matriz B es: \n");
		for (con_1 = 0; con_1 < fil; con_1++){
			printf ("[");
			for (con_2 = 0; con_2 < fil; con_2++){
				printf ("%.2f, ", arreglo_2[con_2][con_1]);
			}
		printf ("]\n");
		}

	     	for (con_1 = 0; con_1 < 3; con_1++){
                	for (con_2 = 0; con_2 < fil; con_2++){
        	                resto[con_2][con_1] = 0;
	                        for (con_3 = 0; con_3 < fil; con_3++){
                        	        resto[con_2][con_1] = resto[con_2][con_1] + arreglo_1[con_3][con_1] * arreglo_2[con_2][con_3];
                	        }
        	        }
	        }

       		printf ("El resultado de la multiplicacion de matrices es: \n");
       		for (con_1 = 0; con_1 < fil; con_1++){
                	printf ("[");
        	        for (con_2 = 0; con_2 < fil; con_2++){
                	        printf ("%.2f, ", resto[con_2][con_1]);
	                }
        	        printf ("]\n");
	        }

		free (arreglo_1);
		free (arreglo_2);
		free (resto);
	}

	else{
                printf ("Debes de ingresar una matriz cuadrada");
                exit (0);
        }

	return 0;
}
