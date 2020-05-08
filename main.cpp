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

    int linha, coluna;
    cout << "Digite a linha inicial " << endl;
    cin >> linha;
    cout << "\nDigite a coluna inicial " << endl;
    cin >> coluna;

    do {
        if(linha > 7){
            linha = 0;
            coluna++;
        }
        if(coluna > 7)
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
        for(int i = 0; i < TAM; i++){
            std::cout << "\n";
            for(int j = 0; j < TAM; j++)
                std::cout << matriz[i][j] << " ";
        }
        std::cout << "Quantidade total de tentativas: " << laco << endl;
        std::cout << "\n---------------------\n";

        linha++;
    }while(1);




   // std::cout << "\n\nA SOLUCAO POSSUI "<< conflito(board_c) <<" CONFLITO(s) \n\n";


    return 0;
}
