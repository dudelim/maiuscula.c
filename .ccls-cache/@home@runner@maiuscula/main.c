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

int primeiraletra(char *frase) {
  char *token = strtok(frase, ".");
  int letra = 1;
  int i;

  if (*token != '\0') {
    *token = toupper(*token);
  }

  if (letra) {
    letra = 0;
  } else {
    token--;
    *token = ' ';
  }
  token = strtok(NULL, ".");
}

#define TAM 50
int main(void) {
  char frase[TAM];

  printf("Input: ");
  sget(frase, TAM);

  primeiraletra(frase);
  printf("Output: %s", frase);

  return 0;
}