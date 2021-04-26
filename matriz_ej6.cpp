/*Realice un programa que calcule la suma de dos matrices cuadradas
3x3 */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main() {
	int matriz1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int matriz2[3][3] = { {9,8,7},{6,5,4},{3,2,1} };
	int matsum[3][3];
	cout << "Matriz Primera:\n";
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << matriz1[i][j] << " "; 
		}
		cout << "|";
		cout << endl;

	}



	getch();
	return 0;
}