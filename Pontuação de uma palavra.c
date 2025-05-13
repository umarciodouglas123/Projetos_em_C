//Márcio Douglas da Silva dos Santos Vieira

/*
Crie, individualmente, um programa RECURSIVO em linguagem C que receba uma palavra de até 25 letras. O programa deve calcular a pontuação da palavra somando a pontuação associada a cada letra. Ao final, o programa deve imprimir a pontuação obtida pela palavra digitada.


   A pontuação de cada letra é a seguinte:



   1 ponto   - 'A', 'E', 'I', 'O', 'U', 'S', 'M', 'R', 'T'

   2 pontos - 'D', 'L', 'C', 'P'

   3 pontos - 'N', 'B'

   4 pontos - 'F', 'G', 'H', 'V'

   5 pontos - 'J'

   6 pontos - 'Q'

   8 pontos - 'X', 'Z', 'K', 'Y', 'W'




   Considere letras maiúsculas e minúsculas como iguais entre si, por exemplo 'a' e 'A' devem ser consideradas idênticas, assim como 'b' e 'B', etc.
*/

#include <stdio.h>
#include <math.h>
#include <unistd.h>

int pontuacao(char *palavra){
    int contador;
    
    if(palavra[0] == '\0'){ //'\0' é o terminador nulo
        return 0;
    }

    //Verificando e atribiundo pontos na palavra
    if(palavra[0] == 'a' || palavra[0] == 'A' || palavra[0] == 'e' || palavra[0] == 'E' || palavra[0] == 'i' || palavra[0] == 'I' || palavra[0] == 'o' || palavra[0] == 'O' || palavra[0] == 'u' || palavra[0] == 'U' || palavra[0] == 's' || palavra[0] == 'S' || palavra[0] == 'm' || palavra[0] == 'M' || palavra[0] == 'r' || palavra[0] == 'R' || palavra[0] == 't' || palavra[0] == 'T'){
        contador = pontuacao(&palavra[1]) + 1;
    }
    else if(palavra[0] == 'd' || palavra[0] == 'D' || palavra[0] == 'l' || palavra[0] == 'L' || palavra[0] == 'c' || palavra[0] == 'C' || palavra[0] == 'p' || palavra[0] == 'P'){
        contador = pontuacao(&palavra[1]) + 2;
    }
    else if(palavra[0] == 'n' || palavra[0] == 'N' || palavra[0] == 'b' || palavra[0] == 'B'){
        contador = pontuacao(&palavra[1]) + 3;
    }
    else if(palavra[0] == 'f' || palavra[0] == 'F' || palavra[0] == 'g' || palavra[0] == 'G' || palavra[0] == 'h' || palavra[0] == 'H' || palavra[0] == 'v' || palavra[0] == 'V'){
        contador = pontuacao(&palavra[1]) + 4;
    }
    else if(palavra[0] == 'j' || palavra[0] == 'J'){
        contador = pontuacao(&palavra[1]) + 5;
    }
    else if(palavra[0] == 'q' || palavra[0] == 'Q'){
        contador = pontuacao(&palavra[1]) + 6;
    }
    else if(palavra[0] == 'x' || palavra[0] == 'X' || palavra[0] == 'z' || palavra[0] == 'Z' || palavra[0] == 'k' || palavra[0] == 'K' || palavra[0] == 'y' || palavra[0] == 'Y' || palavra[0] == 'w' || palavra[0] == 'W'){
        contador = pontuacao(&palavra[1]) + 8;
    }
    else{
        contador = pontuacao(&palavra[1]);
    }
    return contador;
}

int main(){
    char palavra[26];
    int ptotal;

    printf("OBSERVE A LISTA DE PONTOS ABAIXO:\a\n");
    
    printf("***********************************\a\n");
    sleep(1);
    printf("1 PONTO: A, E, I, O, U, S, M, R e T\a\n");
    sleep(1);
    printf("2 PONTOS: D, L, C e P\a\n");
    sleep(1);
    printf("3 PONTOS: N e B\a\n");
    sleep(1);
    printf("4 PONTOS: F, G, H e V\a\n");
    sleep(1);
    printf("5 PONTOS: J\a\n");
    sleep(1);
    printf("6 PONTOS: Q\a\n");
    sleep(1);
    printf("8 PONTOS: X, Z, K, Y e W\a\n");
    sleep(1);
    printf("***********************************\a\n");

    sleep(5);
    
    printf("Digite uma palavra de até 25 letras (Não fazemos distinção entre letras maiúsculas e minúsculas): \a\n");
    scanf("%s", palavra);
    
    ptotal = pontuacao(palavra);

    printf("A palavra digitada foi: %s \a\n", palavra);
    printf("Aguarde!\a\n");
    sleep(2);
    printf("A pontuação de %s, de acordo com a tabela, é: %d \a\n", palavra, ptotal);
    
    return 0;
}