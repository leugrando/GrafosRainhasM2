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

    soluciona_todas(matriz);


    return 0;
}
