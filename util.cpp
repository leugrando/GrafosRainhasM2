#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "util.h"

using namespace std;

void printMatriz(int matriz[][TAM]){
        for(int i = 0; i < TAM; i++){
            cout << "\n \n";
            for(int j = 0; j < TAM; j++)
                cout << "\t" << matriz[i][j];
        }
}

int preenche(int matriz[][TAM])
{
    int linha, coluna;
     cout << "Digite a linha inicial " << endl;
     cin >> linha;
     cout << "\nDigite a coluna inicial " << endl;
     cin >> coluna;


     int vet[8] = {0,0,0,0,0,0,0,0};
     vet[linha] = coluna;
     int varRand;
     int colunaAux;
     for(int i = 0; i<8; i++)
     {
        if(i != linha){        // so passa se nao estiver na posição indicada pelo usuario

            do{                 // do faz as verificações, fica nele ate estar certo
                varRand = rand()%8;
                for (int j=0 ; j< 8; j++) // para nao ter repetiçao no vetor
                {
                   if(varRand==vet[j])
                        varRand = coluna;       // forçar while a fazer de novo kkkk
                }
                if(i!=0){
                    if((abs(vet[i-1] - varRand)<=1)||(abs(vet[i+1] - varRand)<=1))
                            // para diferença entre 1 e o anterior ser maior q 1
                        varRand = coluna;               // força o while pra fazer de novo
                    }


                vet[i] = varRand;
            }while(varRand == coluna); // faz de novo ate a diferença das linhas serem maiores q 1 coluna
                                                                    // e a coluna n for igual a inicial
        }
     }
    for (int i=0; i<8; i++)
    {
      cout << "pos " << i << " " <<vet[i] <<endl;
    }
    for (int i = 0; i<8; i++)       // for para colocar as rainhas nos locais
    {
        colunaAux=vet[i];
        matriz[i][colunaAux] = 4;
    }

    for(int i = 0; i < TAM; i++){
            cout << "\n \n";
            for(int j = 0; j < TAM; j++)
                cout << "\t" << matriz[i][j];
        }

}
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


