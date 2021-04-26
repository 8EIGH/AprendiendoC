/*5. Desarrolle un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemenro del vector*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[100], n, menor=10^10, mayor=0;
    cout<<"Introduzca el numero de elementos del array: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<i+1<<". Introduzca un numero: "; //1. Introduzca un numero
        cin>>numeros[i];
        if(numeros[i]<menor){
            menor = numeros[i];
        }
        if(numeros[i]>menor){
            menor = numeros[i];
        }
    }
    cout<<"\nEl mayor numero es: "<<menor<<endl;






    getch();
    return 0;
}
