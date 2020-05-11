<<<<<<< HEAD
=======
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
>>>>>>> 186c39b15574d52f252bb64a574568fe5f3fa970
#include "util.h"

using namespace std;

int main()
{
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

    menu();

    return 0;
}
