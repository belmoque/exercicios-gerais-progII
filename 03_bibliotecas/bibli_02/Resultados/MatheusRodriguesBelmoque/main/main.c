#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int i,j,i2,j2,input;

    scanf("%d %d",&i,&j);
    int matriz[i][j];

    matrix_read(i,j,matriz);

    scanf("%d %d",&i2,&j2);
    int matriz2[i2][j2];

    matrix_read(i2,j2,matriz2);

    
    

    //Realizar operações
    int flagprimeira = 0;
    while (scanf("%d",&input)==1 && input != 6){
        //Desenhar o MENU

        if(flagprimeira)
            printf("\n");
        printf("1 - Somar matrizes\n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida:\n");

        if(input == 1){
            int matrizResultado[i][j];
            if(possible_matrix_sum(i,j,i2,j2)){
                matrix_add(i,j,matriz,i2,j2,matriz2,matrizResultado);
                matrix_print(i,j,matrizResultado);
            }else{
                printf("\nErro: as dimensoes da matriz nao correspondem\n");
            }
        }

        if(input == 2){
            int matrizResultado[i][j];
            if(possible_matrix_sub(i,j,i2,j2)){
                matrix_sub(i,j,matriz,i2,j2,matriz2,matrizResultado);
                matrix_print(i,j,matrizResultado);
            }else{
                printf("\nErro: as dimensoes da matriz nao correspondem\n");
            }
        }

        if(input == 3){
            if(possible_matrix_multiply(i,j2)){
                int matrizResultado[i][j2];
                matrix_multiply(i,j,matriz,i2,j2,matriz2,matrizResultado);
                matrix_print(i,j2,matrizResultado);
            }else{
                printf("\nErro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n");
            }
        }

        if(input == 4){
            int scalar,matrixdoescalar;
            scanf("%d %d",&scalar,&matrixdoescalar);
            if(matrixdoescalar == 1){
                scalar_multiply(i,j,matriz,scalar);
                matrix_print(i,j,matriz);
            }else{
                scalar_multiply(i2,j2,matriz2,scalar);
                matrix_print(i2,j2,matriz2);
            }
                
                
        }

        if(input == 5){
            int matrixresultado[j][i];
            transpose_matrix(i,j,matriz,matrixresultado);
            matrix_print(j,i,matrixresultado);   // trocar i,j por j,i

            int matrixresultado2[j2][i2];
            transpose_matrix(i2,j2,matriz2,matrixresultado2);
            matrix_print(j2,i2,matrixresultado2); // trocar i2,j2 por j2,i2
        }
        flagprimeira = 1;
    }

    printf("\n");
    printf("1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida: ");
    
    return 0;
}