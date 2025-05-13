//Faltou analisar os casos com acento! Frases não são permitidas!
#include <stdio.h>
#include <math.h>

int contavog(char *palavra){
  //O "if" abaixo analisa o fim da string
  if(palavra[0] == '\0'){ //"\0" é o terminador nulo
    return 0;
  }
  if(palavra[0] == 'a' || palavra[0] == 'A' || palavra[0] == 'e' || palavra[0] == 'E' || palavra[0] == 'i' || palavra[0] == 'I' || palavra[0] == 'o' || palavra[0] == 'O' || palavra[0] == 'u' || palavra[0] == 'U'){
    return 1 + contavog(&palavra[1]);
  }
  else{
    return 0 + contavog(&palavra[1]);
  }
}

int main(){
  int r;
  char palavra[21];
  printf("Digite uma palavra de até 20 letras: \a\n");
  scanf("%s", palavra);

  r = contavog(palavra);

  printf("A palavra tem %d vogais!", r);

  return 0;
}