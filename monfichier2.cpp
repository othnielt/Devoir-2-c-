/*MonFichier2.cpp : Ex2 Devoir2 CSI2772A*/

#include "monfichier2.h"

int main() {
	int monTab[size_tab] = { 2,4,8,20,3,55,87,13,2,5 };

	cout << "Affichage du tableau non trie :" << endl;
	for (int i = 0;i < size_tab;i++) {
		cout << monTab[i] << endl;
	}
	trier(monTab, size_tab);
	cout << "\nAffichage du tableau trie :" << endl;
	for (int i = 0;i < size_tab;i++) {
		cout << monTab[i] << endl;
	}
}
// trie le tableau 
void trier(int tab[], int size){
	int i,j;
    for (i = 1; i < size; ++i) {
       int ref = tab[i];
       for (j = i; j > 0 && tab[j-1] > ref; j--)
           tab[j] = tab[j-1];
       tab[j] = ref;
	}
}



