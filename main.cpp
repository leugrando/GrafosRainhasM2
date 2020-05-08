#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "util.h"

using namespace std;

int main()
{

    srand(time(NULL));

    // matriz teste zerada
    int matriz[TAM][TAM];

    for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

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


    return 0;
}
