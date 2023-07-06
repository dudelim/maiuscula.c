#include <stdio.h>
#include <string.h>

int sget(char* vetor, int tam) {
    fflush(stdin); 
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i = 0; vetor[i] != '\n' && vetor[i]; ++i)
          ;
        vetor[i] = '\0';
    }
}

#define TAM 50
int main(void) {
  char frase[50];

  printf("Input: ");
  sget(frase, TAM);
}