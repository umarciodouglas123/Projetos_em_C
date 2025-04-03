//Márcio Douglas da Silva dos Santos Vieira
//Esse programa realiza a contagem regressiva a partir do número solicitado pelo usuário.

#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main(){
    int m;

    printf("Digite um número: \a\n");
    scanf("%d",&m);

    if(m<=0){
        printf("Por favor, digite um número válido.\a\n");
    }

    //Realiza a contagem regressiva
    while(m>=0){
        printf("%d\a\n", m);
        sleep(1);
        m--;
    }

    //Mensagem ao final da contagem
    printf("Contagem terminada!\a\n");

    return 0;
}