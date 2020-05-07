#include <iostream>
#include "util.h"

using namespace std;

/** verifica diagonais do ponto x_i, y_i */
int verifica_diagonais(int board[][TAM], int x_i, int y_i)
{
    int qtd_conflito = 0;

    std::cout << "\n\tVerificando diagonais\n";
    int i = x_i;
    int j = y_i;

    /* diagonal superior esquerda */
    while(--i >= 0 && --j >= 0)
    {
        std::cout << i <<":"<< j ;
        if(board[i][j] != 0)
        {
            std::cout << "\tCONFLITO!";
            //return 1;
            qtd_conflito++;
        }
        std::cout << endl;
    }

    i = x_i;
    j = y_i;

    /* diagonal superior direita */
    while(--i >= 0 && ++j < TAM)
    {
        std::cout << i <<":"<< j ;
        if(board[i][j] != 0)
        {
            std::cout << "\tCONFLITO!";
            //return 1;
            qtd_conflito++;
        }
        std::cout << endl;
    }


    i = x_i;
    j = y_i;

    /* diagonal inferior direita */
    while(++i < TAM && ++j < TAM)
    {
        std::cout << i <<":"<< j ;
        if(board[i][j] != 0)
        {
            std::cout << "\tCONFLITO!";
            //return 1;
            qtd_conflito++;
        }
        std::cout << endl;
    }

    i = x_i;
    j = y_i;

    /* diagonal inferior esquerda */
    while(++i < TAM && --j >= 0)
    {
        std::cout << i <<":"<< j ;
        if(board[i][j] != 0)
        {
            std::cout << "\tCONFLITO!";
            //return 1;
            qtd_conflito++;
        }
        std::cout << endl;
    }

    return qtd_conflito;
}

/** Retorna a quantidade de conflito nas diagonais */
int conflito(int board[][TAM])
{
    int qtd_conflito = 0;

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
        {
            if(board[i][j] == 4)
            {
                std::cout << "\n\nrainha pos " << i <<":" <<j;
                qtd_conflito += verifica_diagonais(board, i, j);
                std::cout << "---------\n";
            }
        }

    return qtd_conflito;
}
