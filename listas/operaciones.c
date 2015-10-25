#include "operaciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;

	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;

	nuevo->sig = cabecera->sig;
	cabecera->sig = nuevo;
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *primer;

	primer = cabecera;

	nuevo = (struct nodo*) malloc(sizeof(struct nodo) *1);
	nuevo->val = valor_nuevo;

	while (primer->sig != NULL){
		primer = primer->sig;
	}

	nuevo->sig = primer->sig;
	primer->sig = nuevo;

}

void insertar_despues_de(struct nodo *cabecera, int valor_nuevo, int valor_antes)
{
	struct nodo *nuevo;
	struct nodo *antes;

	nuevo = (struct nodo*) malloc(sizeof(struct nodo) *1);
	nuevo->val = valor_nuevo;
	antes = cabecera;

	while (antes->sig != NULL){
		antes = antes->sig;
		if (antes->val == valor_antes){
			nuevo->sig = antes->sig;
			antes->sig = nuevo;
			break;
		}
	}
}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *nuevo;
	nuevo = cabecera;

	while (nuevo->sig != NULL){
		nuevo = nuevo->sig;
		printf ("%d ", nuevo->val);
	}
	printf ("\n");
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	/* Si es diferente de nulo borrar lista */
	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		/* Mientras el siguiente sea diferente de nulo */
		while ( actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = NULL;
	}
}
