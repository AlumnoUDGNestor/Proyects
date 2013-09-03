#include <stdio.h>
#include <conio.h>

int main(){
  int num;
  printf("Elige un numero \n");
  printf("1. Hola \n2. Adios");
  scanf("%d", &num);
    if (num == 1){
      printf("HOLA \n");
      }
    else {
    printf("ADIOS");
      }
      
  getch();
  return 0;
  }
