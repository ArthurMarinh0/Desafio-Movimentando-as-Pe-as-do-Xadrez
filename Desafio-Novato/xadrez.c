#include <stdio.h>

int main(){

    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 5;


//Movimentação da Torre

    printf("***Movimento da Torrez***\n");
    for(int i = 0; i < casasTorre; i++){

        printf("Direita\n");
    }

//Movimentação do Bispo
    
    printf("\n***Movimento do Bispo***\n");

    int contadorBispo = 0;
    
    while(contadorBispo < casasBispo){
        printf("Cima, Direita\n");
        contadorBispo++;
    }

//Movimentação da Rainha

    printf("\n***Movimento da Rainha***\n");

    int contadorRainha = 0;
    do{
        printf("Esquerda\n");
        contadorRainha++;

    }while(contadorRainha < casasRainha);

    return 0;
}