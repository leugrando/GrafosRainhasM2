#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "util.h"

using namespace std;

int main()
{
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
