//Hacer un programa que pida numeros y termine de pedir numeros
//si el usuario inserta -1, e imprima la lista y salga

#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include "operaciones.c"

int main(){
	struct nodo *cabecera;
	int valor;
	cabecera = (struct nodo*) malloc(sizeof(struct nodo));
	inicializar(cabecera);

	printf ("Para terminar de introducir datos, imprimir lista y salir tendras que insertar -1 \n");

	while(1){
		printf ("Dame los valores de la lista\n");
        	scanf("%d", &valor);

		if (valor == -1)
			break;
		insertar_al_final(cabecera, valor);
	}

	imprimir_lista(cabecera);
	borrar_lista(cabecera);
	return 0;
}
