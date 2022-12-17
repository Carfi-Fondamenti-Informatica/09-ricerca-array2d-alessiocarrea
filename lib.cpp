#include "lib.h"

int funzione (char lista[10][20], char nome[20]) {
    int a=0;
    int b=0;
    while ((b < 19),(a < 10)) {
        if (lista[a][b]! = nome[b]) {
            a++;
            b = 0;
        } else if (lista[a][b] == nome[b]) {
            b++;
        }
    }
    return a;
}
