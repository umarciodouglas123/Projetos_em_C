//Márcio Douglas da Silva dos Santos Vieira
//Esse programa cria a tabuada de um número digitado pelo usuário até um número também digitado pelo usuário

#include <stdio.h>
#include <math.h>

int main(){
	//Declaração de variáveis
	int num, i, max;
	//Entrada de dados
	printf("Digite qual número deseja a tabuada: \a\n");
	scanf("%d", &num);
	printf("Digite até qual número deseja multiplicar o número %d: \a\n", num);
	scanf("%d", &max);
	//Declarando o vetor com o tamanho definido pelo usuário
	int V[max];
	//Calculando
	for(i=0;i<=max;i++){
		V[i] = num*i;
	}
	//Exibindo na tela o resultado e finalizando o programa
	for(i=0;i<=max;i++){
		printf("%dx%d=%d\a", num, i, V[i]);
		printf("\n");
	}
}