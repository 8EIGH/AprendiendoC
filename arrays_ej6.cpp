/*6. Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int lista[100], n, suma, mayor=0, menor=10^10, pos;
    cout<<"Introduzca el numero de elementos: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<i+1<<". Introduzca un numero: "; cin>>lista[i];
        if(lista[i]<menor){
            menor = lista[i];

        }
        if(lista[i]>menor){
            menor = lista[i];
            pos = i;
        }

    }
    for(int i=0; i<n; i++){
        if(i != pos){
            suma += lista[i];
        }
    }
    if(menor == suma){
        cout<<"El numero "<<mayor<<", con posicion "<<pos<<" es igual a la suma del resto de los elementos de la lista"<<endl;
    }
    else{
        cout<<"No hay ningun elemento que sea igual a la suma del resto de los elementos de la lista.";
    }
    getch();
    return 0;
}
