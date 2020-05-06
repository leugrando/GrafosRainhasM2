/*
    George de Borba Nardes, Diogo Marchi e Leonardo Grando	21/03/2020

    Implementacao de busca em largura e em profundidade para a disciplina de grafos
    Professor: Rudimar L. S. Dazzi
*/

#include <iostream>
#include <stdlib.h>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int **Alocar_matriz_real (int tamanho){
    int** matriz = new int*[tamanho];

    for (int i = 0; i < tamanho; ++i)
        matriz[i] = new int[tamanho];

    return (matriz);
}
void printMatriz(int** mat, int tamanho){
        for(int i = 0; i < tamanho; i++){
            cout << "\n \n";
            for(int j = 0; j < tamanho; j++)
                cout << "\t" << mat[i][j];
        }
}
void zeraMatriz(int** mat, int tamanho){

        for (int i = 0; i < tamanho; i++)// zerando matriz
        for (int j = 0; j < tamanho; j++)
            mat[i][j] = 0 ;


     printMatriz(mat, tamanho);
}
void pausa(){
    cout << "\n\n\n *** ";
    system("PAUSE");
}
void menu(){
    int op;
    int tam = 0;
    int **mat; // cria matriz de adjacencia

    do{

        cout << "\n ------------ MENU ------------ \n\n";
        cout << "1 - Informar Matriz \n";
        cout << "2 - Informar posicao das rainhas \n";  // TODO
        cout << "3 - Ver rainhas posicionadas \n";      // TODO
        cout << "4 - Ver rainhas posicionadas \n";      // TODO
        cout << "0 - Finalizar o programa \n\n";
        cout << "Informe a opcao desejada: ";

        cin >> op;
        system("CLS");

		switch (op) {

			case 0:

				for (int i = 0; i < tam; ++i)
					delete [] mat[i];
				delete [] mat;

				cout << "\nPrograma finalizado!\n\n\n";
				pausa();

				break;

			case 1:

				cout << "\n------ PREENCHENDO TABULEIRO -----\n\n";
				cout << "Digite o tamanho da matriz quadrada: ";
				cin >> tam;

				mat = Alocar_matriz_real(tam);

				zeraMatriz(mat, tam);
				pausa();

				break;

			case 2:
			    break;

			case 3:
                break;

            case 4:
                break;

        default: {

			}
        }
		system("CLS");

	}while(op!=0);

}



int main()
{
    menu();
    return 0;
}
