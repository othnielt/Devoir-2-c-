#include <iostream>

using namespace std;

int main (void){
 

	int tab[10];	//on déclare un tableau de 10 éléments
	int* p;			//on déclare un pointeur des entiers

	for (int i= 0; i < 10; i++){	//boucle for qui attribue les valeurs de chaque élément du tableau

		tab[i]= i*i ;				//chaque élément vaut le carée de son indice
	}

	//Différentes manières d'écrire : affecte à tab[2] la valeur de tab[1]

	tab [2]= tab[1];
	tab[2] = *(tab + 1);
	*(tab + 2) = tab[1];
	*(tab + 2) = *(tab + 1);
	p = &tab[0];		//  p contient la valeur  de  Addresse  tab[0]
	p = tab + 1;		// permet d'accedé al'element 1 du tableau 
	tab[4] = *p;		//affecte à tab[4] la valeur de *p
	
	cout << *p+3 << "\n" << *p << "\n" << *p << "\n" << *p << "\n" << *p << "\n" << *p << "\n" ;
	
	//cout << tab[4]+3 << "\n" << tab[4] << "\n" << tab[4] << "\n" << tab[4]<< "\n" << tab[4] << "\n" << tab[4] << "\n" ;
	
	return 0;

}
