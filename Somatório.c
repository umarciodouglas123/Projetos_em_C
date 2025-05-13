#include <stdio.h>
#include <math.h>

int sum(int n){
  if(n==1){
    return 1;
  }
  else{
    return n + sum(n-1);
  }
}

int main(){
  int n, r;

  printf("Digite um número inteiro: \a\n");
  scanf("%d", &n);

  r = sum(n);

  printf("O somatório de 0 até %d é: %d", n,r);
  return 0;
}