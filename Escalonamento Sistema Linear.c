/*
Esse programa realiza o escalonamento de uma matriz dada pelo usuário até, se possível, a matriz identidade 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função para imprimir a matriz
void imprimirMatriz(double **matriz, int n){
    int i, j;

    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%8.3lf \a", matriz[i][j]);
        }
        printf("\a\n");
    }
    printf("\a\n");
}

//Função para aplicar o escalonamento até a matriz identidade
void escalonamentoParaIdentidade(double **matriz, int n){
    int i, j, k;
    double temp;

    for(i=0;i<n;i++){
        //Verifica se o pivô é zero
        if(matriz[i][i] == 0){
            //Procura uma linha abaixo para trocar
            for(k=(i + 1);k<n;k++){
                if(matriz[k][i] != 0){
                    for(j=0;j<n;j++){
                        temp = matriz[i][j];
                        matriz[i][j] = matriz[k][j];
                        matriz[k][j] = temp;
                    }
                    break;
                }
            }

            //Caso não seja possível encontrar um pivô válido
            if(matriz[i][i] == 0){
                printf("A matriz não pode ser escalonada para a identidade.\a\n");
                return;
            }
        }

        //Normaliza a linha para que o pivô seja 1
        temp = matriz[i][i];
        for(j=0;j<n;j++){
            matriz[i][j] /= temp;
        }

        //Zera os elementos acima e abaixo do pivô
        for(k=0;k<n;k++){
            if(k!=i){ //Não opera na linha do pivô
                temp = matriz[k][i];
                for(j=0;j<n;j++){
                    matriz[k][j] -= temp * matriz[i][j];
                }
            }
        }

        printf("Iteração %d:\a\n", i + 1);
        imprimirMatriz(matriz, n);
    }
}

//Função principal
int main(){
    int n, i, j;
    double **matriz;

    printf("Digite a ordem da matriz quadrada: \a\n");
    scanf("%d", &n);

    //Alocação dinâmica da matriz
    matriz = (double **)malloc(n * sizeof(double *));
    for(i=0;i<n;i++){
        matriz[i] = (double *)malloc(n * sizeof(double));
    }

    //Leitura dos elementos da matriz
    printf("Digite as estradas da matriz: \a\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Entrada %d da linha %d: \a\a", j + 1, i + 1);
            scanf("%lf", &matriz[i][j]);
        }
    }

    printf("\nMatriz inicial:\a\n");
    imprimirMatriz(matriz, n);

    escalonamentoParaIdentidade(matriz, n);

    printf("\nMatriz final (identidade):\a\n");
    imprimirMatriz(matriz, n);

    //Liberação da memória alocada
    for(i=0;i<n;i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}