#include <stdio.h>
#include <stdlib.h>
#include "operaciones.c"

int main(){
	struct nodo *cabecera;
	int valor;

	cabecera = (struct nodo*) malloc(sizeof(struct nodo));
	inicializar(cabecera);

	while(1){
		printf("Dame valores");
		scanf("%d", &valor);

	if (valor == -1)
	break;

	insertar_al_principio(cabecera, valor);
	}

	ordenar_burbuja(cabecera);
	imprimir_lista(cabecera);
	borrar_lista(cabecera);

return 0;
}
