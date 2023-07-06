#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
  int i;

  printf("Input: ");
  sget(frase, TAM);

  printf("Output: ");
  for(i = 0; frase[i]!='\0'; i++ ){
    if(i == 0){
      if(frase[i]>='a' && frase[i]<='z'){
        frase[i] = frase[i]-26;
      }
    }
  }
}