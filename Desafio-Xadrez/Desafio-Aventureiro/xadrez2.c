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
printf("\n***Movimento do cavalo***\n");

    // Definindo os valores do movimento
    const int casasParaBaixo = 2;
    const int casasParaEsquerda = 1;

    // Variável para controlar o loop interno
    int contadorEsquerda = 0;

    // Loop externo 'for' para os movimentos para baixo
    // Ele vai executar 2 vezes (i=0 e i=1)
    for (int i = 0; i < casasParaBaixo; i++) {
        
        // Em cada volta do loop, imprimimos "Baixo"
        printf("Baixo\n");

        // Condição para ativar o loop interno APENAS na última volta do loop externo
        // i == casasParaBaixo - 1  ->  (1 == 2 - 1) -> (1 == 1)
        if (i == casasParaBaixo - 1) {
            
            // Loop interno 'while' para o movimento para a esquerda
            // Este loop só será executado quando i=1
            while (contadorEsquerda < casasParaEsquerda) {
                printf("Esquerda\n");
                contadorEsquerda++;
            }
        }
    }

    return 0;
}