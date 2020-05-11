#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#define TAM 8


int verifica_diagonais(int board[][TAM], int x_i, int y_i);
int conflito(int board[][TAM]);
void preenche(int matriz[][TAM], int linha, int coluna);
void printMatriz(int matriz[][TAM]);
void soluciona_todas(int matriz[][TAM]);
void soluciona_um(int matriz[][TAM]);
void menu();
void pausa();



#endif // UTIL_H_INCLUDED
