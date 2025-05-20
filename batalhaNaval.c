#include <stdio.h>

#define linha 10   //Constante usada para definir as linhas 
#define coluna 10  //Constante usada para definir  as colunas 

int main()  {
    // Desenvolvendo o Jogo Batalha Naval

    //Martriz do Tabuleiro
    int Matriz[linha][coluna]=
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 0 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 1
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 2
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 3 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 4
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 5
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 6
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 7
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 8
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},//linha 9
    };

    //Loops "For" De Adição Usados Para Adição dos Navios
    for(int j = 0; j < 3; j++)
    {
    Matriz[6][j] = 3;//Navio da Horizontal
    Matriz[j][5] = 3;//Navio da Vertical
    Matriz[j][j] = 3;//Navio da Diagonal Principal
    }
    for(int x = 0, t = 9; x < 3, t >= 7; x++ , t--)
    {
    Matriz[x][t] = 3;//Navio da Diagonal Secundaria 
    }

    // Impressão da matriz
    for(int i = 0; i < linha; i++)
    {
    printf("[ %d, %d, %d, %d, %d, %d, %d, %d, %d, %d ]\n",
    Matriz[i][0], Matriz[i][1], Matriz[i][2], Matriz[i][3], Matriz[i][4],
    Matriz[i][5], Matriz[i][6], Matriz[i][7], Matriz[i][8], Matriz[i][9]);
    }



    return 0;//Programa Finalizou com sucesso.
}