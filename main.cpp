#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "util.h"

using namespace std;

int main()
{

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

    int laco = 0;
    do{
        for(int i = 0; i < TAM; i++)
        for(int j = 0; j < TAM; j++)
            matriz[i][j] = 0;

        preenche(matriz, linha, coluna);

        for(int i = 0; i < TAM; i++){
            std::cout << "\n";
            for(int j = 0; j < TAM; j++)
                std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n---------------------\n";

        laco++;
    }while(conflito(matriz) == 1);

    std::cout << "Quantidade total de tentativas: " << laco << endl;


   // std::cout << "\n\nA SOLUCAO POSSUI "<< conflito(board_c) <<" CONFLITO(s) \n\n";


    return 0;
}
