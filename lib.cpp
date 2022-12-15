#include "lib.h"
#include <cstring>
#include <iostream>
using namespace std;
float Array_Search(char lista[10][20], char nome[1][20])
{
    float posizione;
    posizione = -1;

    for(int i=0;i<10;i++)
    {
        if (strcmp(lista[i], nome[0]) == 0) {
           posizione=i;
        }
    }
return posizione;
}
