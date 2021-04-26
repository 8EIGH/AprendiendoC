//	DEVELOPED BY 8EIGH	//


/*7. Desarrollar un programa que determine si una matriz es simetrica o no.
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main() {
	//Primero declaramos ambas matrices
	int matriz1[100][100];
	int matriz2[100][100];
	int contador = 0, filas, columnas;
	//Pedimos al usuario que defina la primera matriz
	cout<<"Introduzca el numero de filas de la matriz: "; cin>>filas;
	cout<<"\nIntroduzca el numero de columnas de la matriz: "; cin>>columnas;
    //Pedimos al usuario que cree la primera matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Introduzca["<<i<<"]["<<j<<"]: "; cin>>matriz1[i][j];
        }
    }

	//Mostramos la primera matriz por pantalla
	cout << "\nMatriz\n";
	for (int i = 0; i < filas; i++) {
		cout << "| ";
		for (int j = 0; j < columnas; j++) {
			cout << matriz1[i][j] << " ";
		}
		cout << "|" << endl;
	}
	
	/*Para comprobar si la segunda matriz es simetrica lo que haremos sera poner
	un contador que sume 1 cada vez que dos numeros sean iguales*/
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (matriz1[i][j] == matriz1[j][i]){
				contador += 1;
			}
		}
	}
	if (contador == 9) {
		cout << "\nLA MATRIZ ES SIMETRICA\n";
	}
	else {
		cout << "\nLA MATRIZ NO ES SIMETRICA\n";
	}
	cout<<"\n";
	system("pause");
	return 0;
}
