/*3. Escribe un programa que lea de la entrada estandar un vector de numeros y
muestre en la salida estandar los numeros del vector con sus indices asociados.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[100], n;
    cout<<"Digite el numero de elementos que va a tener el array: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Introduzca un numero: "; cin>>numeros[i];//Guardamos todos los elementos del vector


    }
    //Ahora vamos a mostrar los elementos con sus indices asociados

    for(int i=0; i<n; i++){
        cout<<i<<"-->"<<numeros[i]<<endl;
    }

    getch();
    return 0;
}
