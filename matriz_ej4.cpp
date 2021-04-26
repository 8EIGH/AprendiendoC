/*Hacer una matriz preguntando al usuario el numero de filas y
de columnas, llenarla de numeros aleatorios, copiar el contenido
a otra martiz y por ultimo mostrarla en pantalla*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int matriz1[100][100];
    int matriz2[100][100];
    int f, c;
    cout<<"Introduzca el numero de filas de la matriz: "; cin>>f;
    cout<<"Introduzca el numero de columnas de la matriz: "; cin>>c;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            matriz1[i][j]= rand()%10;
        }
    }
    cout<<"Esta es la Matriz 1: "<<endl;
    for(int i=0; i<f; i++){
        cout<<"| ";
        for(int j=0; j<c; j++){
            cout<<matriz1[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            matriz2[i][j]= matriz1[i][j];
        }
    }
    cout<<"\nEsta es la Matriz 2: "<<endl;
    for(int i=0; i<f; i++){
        cout<<"| ";
        for(int j=0; j<c; j++){
            cout<<matriz2[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    getch();
    return 0;
}
