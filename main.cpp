#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char nome[20];
    for (int i=0; i<10; i++) {
        for (int j=0; j<20; j++) {
            lista[i][j] = ' ';
        }
        }
    for (int k=0; k<20; k++){
        nome[k]=' ';
    }
    for (int i=0; i<10;i++){
        cin >> lista[i];
    }
    for (int i=0;i<10;i++){
        cout << lista[i] << endl;
    }
    cin >> nome;
    int i = funzione (lista, nome);
    if (i<10){
        cout << i;
    } else if (i==10){
        cout << "non presente";
    }
return 0;
    }
