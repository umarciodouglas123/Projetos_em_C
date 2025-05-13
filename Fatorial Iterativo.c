//Cálculo do fatorial de forma iterativa

#include <stdio.h>
#include <math.h>

int fat(int n){
  int i, r;
  r = 1;
  for(i=n;i>0;i--){
    r = r*i; //Ou você pode escrever r*=i
  }
  return r;
}

int main(){
  int n, r;
  
  printf("Digite um número inteiro: \a\n");
  scanf("%d", &n);
  
  r = fat(n);

  printf("O fatorial de %d é: %d", n,r);
  return 0;
}