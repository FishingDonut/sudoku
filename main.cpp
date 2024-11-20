#include <iostream>
#include <time.h>
using namespace std;

#define TAM 9

int main()
{
    int matrizPrincipal[TAM][TAM] = {
        {4, 9, 5, 2, 8, 7, 3, 6, 1},
        {7, 2, 8, 6, 1, 3, 4, 9, 5},
        {3, 6, 1, 9, 5, 4, 7, 2, 8},
        {6, 5, 3, 8, 4, 9, 2, 1, 7},
        {9, 8, 4, 1, 7, 2, 6, 5, 3},
        {2, 1, 7, 5, 3, 6, 9, 8, 4},
        {1, 3, 2, 4, 6, 5, 8, 7, 9},
        {5, 4, 6, 7, 9, 8, 1, 3, 2},
        {8, 7, 9, 3, 2, 1, 5, 4, 6}};

    int menu, times, type;
    bool end = false;
    bool game = false;
    bool newGame = true;

    times = time(NULL);

    while (!end)
    {
        system("cls");
        cout << "[MENU]\n(0) jogar\n(1) sobre\n(2) Sair" << endl;

        cin >> menu;

        switch (menu)
        {
        case 0:
            game = true;
            newGame = true;
            break;
        case 1:
            cout << "Daniel Uesler de Brito\tNovembro/2024\nProfessor:" << endl;
            cout << difftime(times, time(NULL)) << endl;
            cin.get();
            cin.get();
            break;
        case 2:
            cout << "Sair" << endl;
            end = true;
            game = false;
            break;
        }

        int matrizGabarito[TAM][TAM];
        int matrizJogo[TAM][TAM];
        int matrizBackup[TAM][TAM];

        while (game)
        {
            string menssagem = "";
            int linha, coluna, valor;

            system("cls");
            
            if (newGame)
            {
                int preenchidas = 42;
                srand(time(NULL));

                for (int i = 0; i < TAM; i++)
                {
                    for (int j = 0; j < TAM; j++)
                    {
                        matrizJogo[i][j] = 0;
                        matrizBackup[i][j] = 0;
                    }
                }

                do
                {
                    type = rand() % 10;
                } while (type > 2);

                switch (type)
                {
                case 0: // transposta
                    for (int i = 0; i < TAM; i++)
                    {
                        for (int j = 0; j < TAM; j++)
                        {
                            matrizGabarito[i][j] = matrizPrincipal[j][i];
                        }
                    }
                    break;
                case 1: // inverte linha
                    for (int i = TAM - 1; i > -1; i--)
                    {
                        for (int j = 0; j < TAM; j++)
                        {
                            matrizGabarito[i][j] = matrizPrincipal[i][j];
                        }
                        cout << endl;
                    }
                    break;
                case 2: // inverte colunas
                    for (int i = 0; i < TAM; i++)
                    {
                        for (int j = TAM - 1; j > -1; j--)
                        {
                            matrizGabarito[i][j] = matrizPrincipal[i][j];
                        }
                    }
                    break;
                }

                while (preenchidas)
                {
                    int i, j;
                    i = rand() % 10;
                    j = rand() % 10;
                    if (matrizJogo[i][j] != matrizGabarito[i][j] && matrizJogo[i][j] == 0)
                    {
                        matrizJogo[i][j] = matrizGabarito[i][j];
                        matrizBackup[i][j] = matrizJogo[i][j];
                        preenchidas--;
                    }
                }

                newGame = false;
            }
            else
            {
                do
                {
                    system("cls");
                    for (int i = 0; i < TAM; i++) // mostrar para o jogador
                    {
                        for (int j = 0; j < TAM; j++)
                        {
                            cout << matrizJogo[i][j];

                            if (j == 2 || j == 5 || j == 8)
                            {
                                cout << " | ";
                            }
                        }
                        cout << endl;
                    }

                    cout << endl
                         << menssagem
                         << endl
                         << endl
                         << "Linha: ";
                    cin >> linha;
                    cout << endl
                         << "coluna: ";
                    cin >> coluna;
                    menssagem = "Cordenadas invalidas! ";
                } while (matrizBackup[linha][coluna] != 0);

                cout << endl
                     << "Digite o valor: ";
                cin >> valor;
                matrizJogo[linha][coluna] = valor % 10;
            }
        }
    }
    // preencher
    // deletar
    // editar
    // sair
    return 0;
}