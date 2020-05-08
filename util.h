#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#define TAM 16


int verifica_diagonais(int board[][TAM], int x_i, int y_i);
int conflito(int board[][TAM]);
int preenche(int matriz[][TAM], int linha, int coluna);
void printMatriz(int matriz[][TAM]);

#endif // UTIL_H_INCLUDED
