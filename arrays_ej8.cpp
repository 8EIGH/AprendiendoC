/*Hacer un programa que lea 5 numeros en un array, los copie a otro array
multiplicados por 2 y muestre el segundo array por pantalla*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros1[5], numeros2[5];
    for(int i=0; i<5; i++){
        cout<<i+1<<" Introduzca un numero: "; cin>>numeros1[i];
    }
    for(int i=0; i<5; i++){
        numeros2[i] = numeros1[i]*2;
        cout<<numeros2[i]<<" ";
    }



    getch();
    return 0;
}
