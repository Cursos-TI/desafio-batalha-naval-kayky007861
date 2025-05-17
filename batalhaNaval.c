#include <stdio.h> 

int main() {
    //BATALHA NAVAL


    //Inicialização da tabela 
    int Matriz[10][10] =
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
     //Abaixo será usada uma estrutura de Repetição para imprimir a tabela e adcionar os navios

    for(int i = 0, j = 0;i < 10; i++)//For usada para criar a tabela 
    {
     //Impresão da tabela 
     printf("[ %d, %d, %d, %d, %d, %d, %d, %d, %d, %d ]\n",
     Matriz[i][0], Matriz[i][1],  
     Matriz[i][2], Matriz[i][3],  
     Matriz[i][4], Matriz[i][5],  
     Matriz[i][6], Matriz[i][7],
     Matriz[i][8], Matriz[i][9]); 
     //Adição dos navios na tabela 
    for(int j = 0; j < 3; j++)
     Matriz[2][j]= 3; Matriz[8][j]= 3;
     Matriz[2][j]= 3; Matriz[7][j]= 3;
     Matriz[2][j]= 3; Matriz[6][j]= 3;
    }
 return 0;//Progrma finalizou com sucesso 
}
