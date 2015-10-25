// Hacer un programa quepida numeros y los inserte de manera
//inversa en una lista y que imprima la lista y salga.

#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include "operaciones.c"

int main (){
	struct nodo *cabecera;
	int valor;

	cabecera = (struct nodo*) malloc(sizeof(struct nodo));
	inicializar(cabecera);

	printf ("Para terminar de ingresar numeros e imprimir la lista debes insertar -1 \n");

	while (1){
		printf ("Dame los datos de la lista\n");
		scanf ("%d" , &valor);

		if (valor == -1)
			break;
		insertar_al_principio(cabecera, valor);
	}

	imprimir_lista(cabecera);
	borrar_lista(cabecera);

	return 0;
}
