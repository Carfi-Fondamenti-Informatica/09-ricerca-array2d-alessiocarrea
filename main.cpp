#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char array[10][20];
  char array2[20];
  int pos=0;
      for (int i=0; i<10; i++) {
      for (int j=0; j<20; j++) {
        array[i][j]=' ';
        array2[j]= ' ';
      }
      }
  for (int=0; int<10; i++){
cin >> array[i];
  }
cin >> array2;
  
  if (funzione (array, array2, pos) {
    cout << pos;
  } else {cout << "non presente";}
      
  return 0;
}
