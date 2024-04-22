#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

main(){
  int l, c, m[TAM][TAM], m2[TAM][TAM], cont = 0;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      cont = cont + 2;
      m[l][c] = cont;
    }
  }
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      m2[l][c] = m[l][c] / 2;
    }
  }
  printf("Matriz Original: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  printf("\nMatriz Resultante: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m2[l][c]);
      }
      else{
        printf("%i\n", m2[l][c]);
      }
    }
  }
  getchar();
}