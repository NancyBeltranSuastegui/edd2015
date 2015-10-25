#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	float **arreglo_1, **arreglo_2, **resto;
	int fil, col;

	cout << "Multiplicacion de matrices n x n " <<endl;
	cout <<"Dame el numero de filas de la matriz\n";
	cin >> fil;

	cout << "Dame el numero de columnas de la matriz\n";
	cin >> col;

	if (fil == col){
		arreglo_1 = new float *[fil];
		for (int con_1 = 0; con_1 < fil; con_1++){
			arreglo_1[con_1] = new float[col];
		}

		arreglo_2 = new float *[fil];
		for (int con_1 = 0; con_1 < fil; con_1++){
			arreglo_2[con_1] = new float[col];
		}

		resto = new float *[fil];
		for (int con_1 = 0; con_1 < fil; con_1++){
                        resto[con_1] = new float[col];
		}

		cout <<"introduce los datos de la matriz 1" << endl;
		for (int con_1 = 0; con_1 < fil; con_1++){
			for (int con_2 = 0; con_2 < fil; con_2++){
				cout << "Dame los datos de la columna " << con_2 + 1 << "de la fila " << con_1 + 1 << endl;
				cin >> arreglo_1[con_2][con_1];
			}
		}

		cout << "introduce los datos de la matriz 2" << endl;
		for (int con_1 = 0; con_1 < fil; con_1++){
			for (int con_2 = 0; con_2 < fil; con_2++){
				cout << "Dame los datos de la columna " << con_2 + 1 << "de la fila " << con_1 + 1 << endl;
				cin >> arreglo_2[con_2][con_1];
			}
		}

		cout << "Las matrices que se multiplicaran son" << endl;
		cout << "La matriz 1 es: " << endl;
		for (int con_1 = 0; con_1 < fil; con_1++){
			cout << "[" ;
			for (int con_2 = 0; con_2 < fil; con_2++){
				cout << arreglo_1[con_2][con_1];
			}
			cout << "]\n";
		}

		cout << "La matriz 2 es: " << endl;
		for (int con_1 = 0; con_1 < fil; con_1++){
			cout << "[" ;
			for (int con_2 = 0; con_2 < fil; con_2++){
				cout << arreglo_2[con_2][con_1];
			}
			cout << "]" << endl;
		}


	//operaciones
		for (int con_1 = 0; con_1 < fil; con_1++){
			for (int con_2 = 0; con_2 < fil; con_2++){
				resto[con_2][con_1] = 0;
				for (int con_3 = 0; con_3 < fil; con_3++){
					resto[con_2][con_1] = resto[con_2][con_1] + arreglo_1[con_3][con_1] * arreglo_2[con_2][con_3];
				}
			}
		}

		cout << "El resultado de la multiplicacion es: " << endl;
		for (int con_1 = 0; con_1 < fil; con_1++){
			cout <<"[";
			for (int con_2 = 0; con_2 < fil; con_2++){
				cout << resto[con_2][con_1];
			}
			cout << "]" << endl;
		}

		delete [] arreglo_1;
		delete [] arreglo_2;
		delete [] resto;
	}

	else{
		cout << "Favor de ingresar una matriz cuadrada\n";
		exit(0);
	}

	return 0;
}
