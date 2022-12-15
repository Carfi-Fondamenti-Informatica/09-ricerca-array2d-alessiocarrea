#include "lib.h"

bool funzione (char array[10][20], char array2[20], int &pos) {
  for (int i=0; i<10; i++) {
      for (int j=0; j<20; j++) {
         if (array2[j]!=array[i][j]) {
           j=20;
         } else if (j==19) {
             pos=i;
             return 1;
         }
      }
  }
  return 0;
}
