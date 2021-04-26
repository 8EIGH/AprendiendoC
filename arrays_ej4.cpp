/* Escribe un programa que defina un vector de numeros y muestrs
en la salida estandar el vector en orden inverso (del ultimo al primero)*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[100], numeros2[100], n, z=0;
    cout<<"¿Cuantos numeros va a introducir?: "; cin>>n;

    for(int i=0; i<n; i++){
        cout<<"\nIntroduzca un numero: "; cin>>numeros[i];

    }
    n = n-1;
    for(int x=0;x<n; x++){
        numeros2[x]=numeros[n];
        n--;

    }
    cout<<"\nEl array al reves es: "<<numeros2<<endl;
    getch();
    return 0;
}
