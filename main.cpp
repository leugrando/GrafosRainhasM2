#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "util.h"

using namespace std;

int main()
{
<<<<<<< HEAD
    // matriz teste zerada
    int matriz[TAM][TAM] =
    { 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0};
=======
    /* posição escolhida pra rainha 1 */
    int x = 0;
    int y = 0;

    int rainhas[TAM];

    /* limpa vetor */
    for(int i = 0; i < TAM; i++)
        rainhas[i] = 0;

    /* posição primeira rainha */
    rainhas[x] = y;


>>>>>>> 930f6f4ae315e9cf105842c6bb2afb2c0d2a131e
    /* matriz sem conflito */
    int board_s[TAM][TAM] =
    { 0, 0, 0, 0, 0, 4, 0, 0,
      0, 0, 0, 4, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 4, 0,
      4, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 4,
      0, 4, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 4, 0, 0, 0,
      0, 0, 4, 0, 0, 0, 0, 0};

    /* matriz com conflito */
    int board_c[TAM][TAM] =
    { 0, 0, 0, 0, 0, 4, 0, 0,
      0, 0, 0, 4, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 4, 0,
      0, 4, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 4,
      4, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 4, 0, 0, 0,
      0, 0, 4, 0, 0, 0, 0, 0};

        preenche(matriz);



   // std::cout << "\n\nA SOLUCAO POSSUI "<< conflito(board_c) <<" CONFLITO(s) \n\n";


    return 0;
}
