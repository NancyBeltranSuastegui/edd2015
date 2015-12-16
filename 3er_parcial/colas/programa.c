#include "operaciones.c"
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo *cola;

int menu();
void operaciones(cola cabecera, int opcion);
int main (){

	cola cabecera;
	int opcion;

	cabecera = (struct nodo *) malloc(sizeof(struct nodo));
	inicializar(cabecera);

	do{
		opcion = menu();
		operaciones (cabecera, opcion);

	}while (opcion != 4);
	borrar_cola(cabecera);
	return 0;
}

int menu(){
	printf ("Que quieres hacer\n 1. insertar dato\n 2. eliminar dato\n 3. imprimir cola\n");
	scanf("%d", &opcion);

	return opcion;
}
void operaciones (cola cabecera, int opcion){
	int dato;
	switch(opcion){
		case 1:
			printf ("Dame un dato para insertar\n");
			scanf("%d", &dato);
			insertar_al_final(cabecera, dato);
			break;

		case 2:
			borrar_al_principio(cabecera);
			break;

		case 3:
			imprimir_cola(cabecera);
			break;

		case 4:
			break;

		default:
			printf("valor invalido");
			break;
	}
}
