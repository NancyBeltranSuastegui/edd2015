#include <iostream>
using namespace std;

int main(){
	float arreglo_1[3][3], arreglo_2[3][3], resto_multi[3][3];

	cout <<"introduce los datos de la matriz 1" << endl;
	for (int con_1 = 0; con_1 < 3; con_1++){
		for (int con_2 = 0; con_2 < 3; con_2++){
			cout << "Dame los datos de la columna " << con_2 + 1 << "de la fila " << con_1 + 1 << endl;
			cin >> arreglo_1[con_2][con_1];
		}
	}

	cout << "introduce los datos de la matriz 2" << endl;
	for (int con_1 = 0; con_1 < 3; con_1++){
		for (int con_2 = 0; con_2 < 3; con_2++){
			cout << "Dame los datos de la columna " << con_2 + 1 << "de la fila " << con_1 + 1 << endl;
			cin >> arreglo_2[con_2][con_1];
		}
	}

	cout << "Las matrices que se multiplicaran son" << endl;
	cout << "La matriz 1 es: " << endl;
	for (int con_1 = 0; con_1 < 3; con_1++){
		cout << "[" ;
		for (int con_2 = 0; con_2 < 3; con_2++){
			cout << arreglo_1[con_2][con_1];
		}
		cout << "]\n";
	}

	cout << "La matriz 2 es: " << endl;
	for (int con_1 = 0; con_1 < 3; con_1++){
		cout << "[" ;
		for (int con_2 = 0; con_2 < 3; con_2++){
			cout << arreglo_2[con_2][con_1];
		}
		cout << "]" << endl;
	}

	//operaciones
	for (int con_1 = 0; con_1 < 3; con_1++){
		for (int con_2 = 0; con_2 < 3; con_2++){
			resto_multi[con_2][con_1] = 0;
			for (int con_3 = 0; con_3 < 3; con_3++){
				resto_multi[con_2][con_1] = resto_multi[con_2][con_1] + arreglo_1[con_3][con_1] * arreglo_2[con_2][con_3];
			}
		}
	}

	cout << "El resultado de la multiplicacion es: " << endl;
	for (int con_1 = 0; con_1 < 3; con_1++){
		cout <<"[";
		for (int con_2 = 0; con_2 < 3; con_2++){
			cout << resto_multi[con_2][con_1];
		}
		cout << "]" << endl;
	}
	return 0;
}



