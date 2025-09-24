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





    return 0;
}