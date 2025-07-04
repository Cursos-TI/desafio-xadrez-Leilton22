#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//bom dia, segue abaixo a minha atividade, gostaria muito receber um feedback explicando se estou fazendo da maneira correta e onde estou errando.

//movimento do bispo
void MoverBispo(int casas){
    if(casas > 0) {
        printf("Bispo Direita Cima\n");
        MoverBispo(casas - 1);
    }
}
//movimento do Torre
void MoverTorre(int casas){
    if(casas > 0) {
        printf("Torre direita\n");
        MoverTorre(casas - 1);
    }
}
//movimento do Rainha
void MoverRainha(int casas){
    if(casas > 0) {
        printf("Rainha Esquerda\n");
        MoverRainha(casas - 1);
    }
}
// movimento do cavalo
void MoverCavalo(int casas){
    if(casas > 0) {
        printf("Cavalo Cima Direita\n");
        MoverCavalo(casas - 1);
    }
}
//chamada dos operadores
int main(){
    MoverBispo(5);
    MoverTorre(5);
    MoverRainha(8);
    MoverCavalo(1);

    return 0;
    printf("Novo commit\n");
}

//Bispo 5 casas direita,cima
//Torre 5 casa pra direita
//Rainha 8 casas pra esquerda
//cavalo 1 casa para cima direita