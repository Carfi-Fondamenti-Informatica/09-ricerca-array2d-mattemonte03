#include <iostream>
#include "lib.h"

using namespace std;

int main(){
    char lista[3][20];
    char nome[1][20];


   for(int i=0;i<3;i++){
      cout<<"inserisci nome: ";
      cin>>lista[i];
    }
    cout<<"Inserisci nome da cercare: "<<endl;
    cin>>nome[0];

    float pos = Array_Search (lista,nome);

    if (pos<0) {
        cout <<"Non presente";
    } else {
        cout <<pos;
    }

    return 0;
}
