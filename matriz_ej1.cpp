/*1. HAcer un programa para rellenar una matriz pidiendo al usuario el numero de filas
y columnas, posteriormente mostrar la matriz en pantalla.*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[100][100], filas, columnas;
    //Pedimos al usuario que introduzca el numero de filas y de columnas
    cout<<"Introduzca el numero de filas: "; cin>>filas;
    cout<<"Introduzca el numero de columnas: "; cin>>columnas;
    //Usamos un bucle for para rellenar las filas y las columnas
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Introduzca un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    //Mostramos la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }




    getch();
    return 0;
}
