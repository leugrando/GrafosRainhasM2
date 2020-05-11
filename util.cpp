#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "util.h"

using namespace std;

void pausa(){
    cout << "\n\n\n *** ";
    system("PAUSE");
}

void printMatriz(int matriz[][TAM]){
    for(int i = 0; i < TAM; i++){
        cout << "\n";
        for(int j = 0; j < TAM; j++)
            cout << " " << matriz[i][j];
    }
    cout << "\n-------------------\n\n";
}

void preenche(int matriz[][TAM], int linha, int coluna)
{
    /** vetor de representação de posições
    *   i      = linha
    *   vet[i] = coluna
    *   posição da rainha(i, vet[i])
    */
    int vet[TAM];

    int seq[TAM];
    int num_seq = 1;

    // limpa vetores
    for(int i = 0; i < TAM; i++)
        seq[i] = vet[i] = -1;

    // posicao inicial
    vet[linha] = coluna;
    seq[linha] = 1;

    int varRand = -1;
    int i = 0;

    bool next = true;

    while(next)
    {
        // linha
        do{
            i = rand()%TAM;
        }while(vet[i] != -1);

        num_seq++;
        seq[i] = num_seq;

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
        matriz[i][vet[i]] = seq[i];

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
            if(board[i][j] != 0)
                if(verifica_diagonais(board, i, j)==1)
                    return 1;

    return 0;
}

void soluciona_todas(int matriz[][TAM])
{
    /* posição inicial */
    int linha = 0;
    int coluna = 0;

    // realiza prenchimento para todas as posições
    do {
        if(linha > TAM-1){
            linha = 0;
            coluna++;
        }
        if(coluna > TAM-1)
            break;


        std::cout << "Posicao inicial " << linha << ":" << coluna << "\n";

        int laco = 0;
        do{
            // zera a matriz para nova tentativa
            for(int i = 0; i < TAM; i++)
            for(int j = 0; j < TAM; j++)
                matriz[i][j] = 0;

            preenche(matriz, linha, coluna);
            laco++;

        }while(conflito(matriz) == 1);

        // print solucao
        printMatriz(matriz);

        std::cout << "Quantidade total de tentativas: " << laco << endl;
        std::cout << "\n---------------------\n";

        linha++;
    }while(1);
}

void soluciona_um(int matriz[][TAM])
{
    int linha, coluna, laco = 0;
    cout <<"Digite a linha inicial da rainha: " << endl;
    cin  >> linha;
    cout <<"\n Digite a coluna inicial da rainha" <<endl;
    cin >> coluna;
    system("CLS");
     std::cout << "Posicao inicial " << linha << ":" << coluna << "\n";

        do{
            // zera a matriz para nova tentativa
            for(int i = 0; i < TAM; i++)
            for(int j = 0; j < TAM; j++)
                matriz[i][j] = 0;

            preenche(matriz, linha, coluna);
            laco++;

        }while(conflito(matriz) == 1);

        // print solucao
        printMatriz(matriz);

        std::cout << "Quantidade total de tentativas: " << laco << endl;
        std::cout << "\n---------------------\n";}
void menu(){
    int op;
    do{

        cout << "\n ------------ MENU ------------ \n\n";
        cout << "1 - Informar posicao inicial das rainhas: \n";
        cout << "2 - Solucao todos os casos: \n";  // TODO
        cout << "3 - Desenvolvedores: \n";      // TODO
        cout << "0 - Finalizar o programa \n\n";
        cout << "Informe a opcao desejada: ";

        cin >> op;
        system("CLS");

		switch (op) {

			case 0:{

				cout << "\nPrograma finalizado!\n\n\n";
				pausa();

				break;
			}
			case 1:{

    srand(time(NULL));
<<<<<<< HEAD
=======

    int linha, coluna;
    // matriz teste zerada
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            matriz[i][j] = 0;



    soluciona_um(matriz);
    >>>>>>> 186c39b15574d52f252bb64a574568fe5f3fa970
=======

    pausa();
				break;
			}
			case 2:{
<<<<<<< HEAD
=======

    srand(time(NULL));

    // matriz teste zerada
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

    soluciona_todas(matriz);
>>>>>>> 186c39b15574d52f252bb64a574568fe5f3fa970
    pausa();
			    break;
		}
			case 3:
			    cout << "-------Desenvolvedores------\n" <<endl;
			    cout << "Diogo Marchi" << endl;
			    cout << "George de Borba" << endl;
			    cout << "Leonardo Grando";
			    pausa();
                break;

        default: {

			}
        }
		system("CLS");

	}while(op!=0);

}

