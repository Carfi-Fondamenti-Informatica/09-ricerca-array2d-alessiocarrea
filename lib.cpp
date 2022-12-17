#include "lib.h"

bool funzione (char Array1[10][20], char Array2[20], int &pos) {
for (int a=0; a<10; a++) {
for (int b=0; b<20; b++) {
if (Array2[b]!=Array1[a][b]) {
b=20;
} else if (b==19) {
pos=a;
return true;
}
}
}
return false;
}
