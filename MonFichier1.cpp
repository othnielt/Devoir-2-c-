#include <iostream>
using namespace std;


int main(void) {
int tab[10];
int* p;
for (int i = 0;i < 10;i++) {
tab[i] = i * i;
}
tab[2] = tab[1];
tab[2] = *(tab + 1);
*(tab + 2) = tab[1];
*(tab + 2) = *(tab + 1);
p = &tab[0];
p = tab + 1;
tab[4] = *p;


for (int i = 0;i < 10;i++) {

int *r = &tab[i];
cout << r ;
}

}