/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    for(int i=0; i<3; i++){
        cout<<matriz[i][i]<<" ";
    }
    getch();
    return 0;
}
