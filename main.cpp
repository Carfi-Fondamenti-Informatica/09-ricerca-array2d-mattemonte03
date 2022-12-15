#include <iostream>
#include "lib.h"

using namespace std;

int main() {

   char lista[10][20];
   char nome[1][20];

   cout << "inserisci 10 nomi: " << endl;
   for(int i=0;i<10;i++){
        cin >> lista[i];
     }
    cout << "Inserisci nome da cercare: " << endl;
    cin >> nome[0];

    float pos = Array_Search (lista,nome);

    if (pos<0) {
        cout << "non presente";
    } else {
        cout << pos;
    }

return 0;

}
