//Hacer un programa que pida una lista de numeros, luego que pida otro
//numero para insertar despues de algun numero de la lista


#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include "operaciones.c"

int main(){
	struct nodo *cabecera;
	int valor_1, valor_2;

	cabecera = (struct nodo *) malloc(sizeof(struct nodo));
	inicializar (cabecera);

	printf ("para terminar de introducir numeros introduce un 0 \n");

	while (1){
		printf ("Dame los datos de la lista \n");
		scanf ("%d" , &valor_1);

		if (valor_1 == 0)
			break;
		insertar_al_principio(cabecera, valor_1);
	}

	printf ("Dame un numero \n");
	scanf ("%d" , &valor_1);

	printf ("Despues de que numero lo quieres insertar \n");
	scanf ("%d" , &valor_2);

	insertar_despues_de(cabecera, valor_1, valor_2);
	imprimir_lista(cabecera);
	borrar_lista(cabecera);

	return 0;
}
