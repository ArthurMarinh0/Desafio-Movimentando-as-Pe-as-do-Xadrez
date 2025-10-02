#include <stdio.h>

//Recursividade da Torre
void recursiveTorre(int n){
    if (n > 0) {
        printf("Direita\n");  
        recursiveTorre(n - 1);
    }
}

//Movimentação do Bispo com recursividade e loops aninhados
void recursiveBispo(int n) {
    if (n > 0) {
        // Loop externo: movimento vertical (cima)
        printf("Cima, ");
        // Loop interno: movimento horizontal (direita)
        for (int i = 0; i < 1; i++) { // 1 passo para a direita por movimento
            printf("Direita\n");
        }
        recursiveBispo(n - 1);
    }
}

//Movimentação da Rainha
void recursiveRainha(int n){
    if(n > 0){
        printf("Esquerda\n");
        recursiveRainha(n - 1);
    }
}


int main(){
    //Definindo o número de casas que cada peça irá se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //Movimentação da Torre
    // A Torre se move em linha reta. Vamos simular o movimento de 5 casas para a direita.
    printf("***Movimento da Torre***\n");
    recursiveTorre(casasTorre);


    //Movimentação do Bispo
    // O Bispo se move na diagonal. Vamos simular o movimento de 5 casas na diagonal para cima e para a direita.
    printf("\n***Movimento do Bispo***\n");
    recursiveBispo(casasBispo);

    //Movimentação da Rainha
    //A Rainha pode se mover em todas as direções. Vamos simular o movimento de 8 casas para a esquerda.
    printf("\n***Movimento da Rainha***\n");
    recursiveRainha(casasRainha);

    //Movimentação do cavalo
    printf("\n***Movimento do Cavalo***\n");

    int movimentos = 1; // Número de movimentos em "L"
    int casasParaCima = 2;
    int casasParaDireita = 1;

    for (int i = 0; i < movimentos; i++) {
        int moveCima = 0, moveDireita = 0;
        for (int j = 0; j < casasParaCima + casasParaDireita; j++) {
            if (moveCima < casasParaCima) {
                printf("Cima\n");
                moveCima++;
                continue;
            }
            if (moveDireita < casasParaDireita) {
                printf("Direita\n");
                moveDireita++;
            }
            // Se já fez o movimento em "L", interrompe o loop interno
            if (moveCima == casasParaCima && moveDireita == casasParaDireita) {
                break;
            }
        }
    }

    return 0;
}