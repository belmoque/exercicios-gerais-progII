#include <stdio.h>
#include "matrix_utils.h"

int main(){
    int i,j,i2,j2,contador,input;

    scanf("%d %d",&i,&j);
    int matriz[i][j];

    matrix_read(i,j,matriz);

    scanf("%d %d",&i2,&j2);
    int matriz2[i2][j2];

    matrix_read(i2,j2,matriz2);

    
    //Desenhar o MENU

    printf("1 - Somar matrizes\n");
    printf("2 - Subtrair matrizes\n");
    printf("3 - Multiplicar matrizes\n");
    printf("4 - Multiplicacao de uma matriz por escalar\n");
    printf("5 - Transposta de uma matriz\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida:\n");

    //Obter input do usuário

    scanf("%d",&input);

    //Realizar operações

    if(input == 1){
        int matrizResultado[i][j];
        matrix_add(i,j,matriz,i2,j2,matriz2,matrizResultado);
    }
    

    return 0;
}