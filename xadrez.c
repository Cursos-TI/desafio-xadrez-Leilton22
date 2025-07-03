#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   int i = 1;
   int contador = 0;
   int movimento = 1;

   for (int i = 0; i < 5; i++)
   {
     printf("Torre Para Frente!\n");
   }
   


      while ( i <= 8)
    {
    printf("Rainha Para Esquerda!\n");
    i++;
    }
   


 do {
      printf("Bispo Cima Direita!\n", contador);  
        contador++;

    } while (contador < 5);

      while (movimento--)
   {
    for (int i = 0; i < 2; i++){
        printf("Cavalo Cima\n");
    }
    printf("Cavalo Direita \n");
   }
   
  printf("Qual Movimento voce deseja fazer agora? \n");




    return 0;

    printf("Novo commit\n");
  
}

//bispo 5 casas cima, direita, com estrutura while
//rainha 8 casas esquerda, com estrutura do while
//torre 5 casa para frente,  com estrutura for
//cavalo 2 casas pra cima e 1 casa pra direita