//Cálculo do fatorial de forma recursiva

#include <stdio.h>
#include <math.h>

int fat(int n){
  if(n==0){
    return 1;
  }
  else{
    return n*fat(n-1);
  }
}

int main(){
  int n, r;
  
  printf("Digite um número inteiro: \a\n");
  scanf("%d", &n);
  
  r = fat(n);

  printf("O fatorial de %d é: %d", n,r);
  return 0;
}