#include <stdio.h>

#define linha 10
#define coluna 10

int main()  {

    //Declaração do Tabuleiro 

    int Tabuleiro[linha][coluna] = 
    {
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {0, 1, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 1, 0, 0, 1, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 2, 0},
    {1, 1, 1, 0, 0, 0, 0, 2, 2, 2},
    {0, 0, 2, 0, 0, 0, 0, 0, 2, 0},
    {0, 2, 2, 2, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 0, 0, 2, 0, 0, 0, 0},
    {0, 0, 0, 0, 2, 2, 2, 0, 0, 0},
    {0, 0, 0, 0, 2, 2, 2, 0, 0, 0}
    };


     //Adição dos navios e os poderes 

     for(int i = 0; i < linha; i++)
     {
        for(int j = 0; j < coluna; j++)
        {
          if(Tabuleiro[i][j] == 1)
          {
            Tabuleiro[i][j] = 3;
          }else if(Tabuleiro[i][j] == 2) 
          {
            Tabuleiro[i][j] = 5;
          } 
        }
     }

    // Imprime o Tabauleiro 
   printf("Tabuleiro da Batalha Naval\n");
    for(int i = 0; i < linha; i++) 
    {
        for(int j = 0; j < coluna; j++)
        {
            printf(" %d ",Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}