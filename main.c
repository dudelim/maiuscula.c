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

#define TAM 50
int main(void) {
  char frase[50];
  int i;

  printf("Input: ");
  sget(frase, TAM);

  printf("Output: ");
  for (i = 0; i < strlen(frase) + 1; i++) {
    if (i == 0 || frase[i - 1] == ' ') {
      frase[i] = toupper(frase[i]);
    }
  }
  printf("%s\n", frase);
  return 0;
}