#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   int i = 1;
   int contador = 0;

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




    return 0;
}

//bispo 5 casas cima, direita, com estrutura while
//rainha 8 casas esquerda, com estrutura do while
//torre 5 casa para frente,  com estrutura for