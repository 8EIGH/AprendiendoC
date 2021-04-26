/*5. realice un programa que lea una matriz 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz
original.
|1 2 3|     |1 4 7|
|4 5 6| --> |2 5 8|
|7 8 9|     |3 6 9|
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int matriz[3][3], matriz2[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
        cout<<"Introduzca un numero ["<<i<<"]["<<j<<"]: ";
        cin>>matriz[i][j];
        }
    }
    cout<<endl;
    cout<<"Matriz Original\n";
    for(int i=0; i<3; i++){
        cout<<"| ";
        for(int j=0; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matriz Transpuesta\n";
    for(int i=0; i<3; i++){
        cout<<"| ";
        for(int j=0; j<3; j++){
            cout<<matriz[j][i]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }

    getch();
    return 0;


}
