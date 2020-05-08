#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "util.h"

using namespace std;

void printMatriz(int matriz[][TAM]){
    for(int i = 0; i < TAM; i++){
        cout << "\n";
        for(int j = 0; j < TAM; j++)
            cout << " " << matriz[i][j];
    }
    cout << "\n-------------------\n\n";
}

int preenche(int matriz[][TAM], int linha, int coluna)
{
    /** vetor de representação de posições
    *   i      = linha
    *   vet[i] = coluna
    *   posição da rainha(i, vet[i])
    */
    int vet[TAM];

    // limpa vetor
    for(int i = 0; i < TAM; i++)
        vet[i] = -1;

    // posicao inicial
    vet[linha] = coluna;

    int varRand = -1;
    int colunaAux = 0;
    int i = 0;

    bool next = true;

    while(next)
    {
        // linha
        do{
            i = rand()%TAM;
        }while(vet[i] != -1);

        // coluna
        do{
            varRand = rand()%TAM;

            // verifica se o valor ja existe no vetor
            for (int j = 0 ; j < TAM; j++)
            {
                if(vet[j] == varRand)
                {
                    varRand = -1;
                    break;
                }
            }
            vet[i] = varRand;
        }while(varRand == -1);

        // verifica se todas as linhas foram visitadas
        next = false;
        for (int j = 0 ; j < TAM; j++)
            if(vet[j] == -1)
            {
                next = true;
                break;
            }

    }

    // vetor pra matriz
    for (int i = 0; i < TAM; i++)
        matriz[i][vet[i]] = 4;
}



/** verifica diagonais do ponto x_i, y_i */
int verifica_diagonais(int board[][TAM], int x_i, int y_i)
{
    int i = x_i;
    int j = y_i;

    /* diagonal superior esquerda */
    while(--i >= 0 && --j >= 0)
        if(board[i][j] != 0)
            return 1;

    i = x_i;
    j = y_i;

    /* diagonal superior direita */
    while(--i >= 0 && ++j < TAM)
        if(board[i][j] != 0)
            return 1;

    i = x_i;
    j = y_i;

    /* diagonal inferior direita */
    while(++i < TAM && ++j < TAM)
        if(board[i][j] != 0)
            return 1;

    i = x_i;
    j = y_i;

    /* diagonal inferior esquerda */
    while(++i < TAM && --j >= 0)
        if(board[i][j] != 0)
            return 1;

    return 0;
}

/** Retorna a quantidade de conflito nas diagonais */
int conflito(int board[][TAM])
{
    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            if(board[i][j] == 4)
                if(verifica_diagonais(board, i, j)==1)
                    return 1;

    return 0;
}


