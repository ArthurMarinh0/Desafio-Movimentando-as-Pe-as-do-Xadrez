#include <stdio.h>

int main(){
    //Definindo o número de casas que cada peça irá se mover.
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;


//Movimentação da Torre
    // A Torre se move em linha reta. Vamos simular o movimento de 5 casas para a direita.
    printf("***Movimento da Torrez***\n");
    for(int i = 0; i < casasTorre; i++){

        printf("Direita\n");
    }

//Movimentação do Bispo
    // O Bispo se move na diagonal. Vamos simular o movimento de 5 casas na diagonal para cima e para a direita.
    printf("\n***Movimento do Bispo***\n");

    int contadorBispo = 0;
    
    while(contadorBispo < casasBispo){
        printf("Cima, Direita\n");
        contadorBispo++;
    }

//Movimentação da Rainha
    //A Rainha pode se mover em todas as direções. Vamos simular o movimento de 8 casas para a esquerda.
    printf("\n***Movimento da Rainha***\n");

    int contadorRainha = 0;
    do{
        printf("Esquerda\n");
        contadorRainha++;

    }while(contadorRainha < casasRainha);

//Movimentação do cavalo
    //O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
    printf("\n***Movimento do cavalo***\n");

    int contadorCavalo = 0;
    
    return 0;
}