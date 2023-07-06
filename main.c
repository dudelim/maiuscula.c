#include <ctype.h>
#include <stdio.h>
#include <string.h>

int sget(char *vetor, int tam) {
  fflush(stdin);
  if (fgets(vetor, tam, stdin)) {
    int i;
    for (i = 0; vetor[i] != '\n' && vetor[i]; ++i)
      ;
    vetor[i] = '\0';
  }
}

int primeiraletra (char* frase){
  int i;
  int tamanho = strlen(frase);

  if(tamanho > 0){
    frase[0] = toupper(frase[0]);
  }

  for(i = 1; i < tamanho; i++){
    if(frase[i] == '.' || frase[i] == '?' || frase[i] == '!' && i < tamanho - 1){
      frase[i + 2] = toupper(frase[i + 2]);
    }
  }
}

#define TAM 50
int main (void){
  char frase[TAM];

  printf("Input: ");
  sget(frase, TAM);

  primeiraletra(frase);
  printf("Output: %s", frase);

  return 0;
}