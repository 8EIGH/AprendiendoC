/*Vamos a declarar lo que son y como se usan los arrays
1. Todos los arrays empiezan con el indice 0, despues 1,2,3...
almacenamos en cada uno un numero o palabra, pero no podemos mezclar
2. Para definirlos sera tipo(int,char, float) nombre [tamaño]

*/
/*Ejercicio 1. Escribe un programa que defina un array de numeros y calcule la suma de
sus elementos*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int suma=0;
    for(int i=0;i<5;i++){
        suma += numeros[i];
    }
    cout<<"La suma da como resultado: "<<suma<<endl;






    getch();
    return 0;
}
