/*MonFichier3.cpp : Ex3 Devoir2 CSI2772A*/

#include <iostream>
using namespace std;

int** triangleInf(int n) //fonction qui retourne un pointeur vers un pointeur vers un entier
{
	//VOTRE VIENT ICI
	int i,j, élément;
	for (i=0; i<n; i++){
		élément = 1;
		for (j=0; j<= i; j++){
			cout << élément << " ";
			élément = élément * (i-j)/(j+1);
		}
		cout << endl;

	}

	return 0;
}

int main() {
	int** tab;
	const int size = 10;
	tab = triangleInf(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << tab[i][j] << " ";
		cout << endl;
	}
}