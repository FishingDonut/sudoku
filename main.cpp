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

    int menu, times;
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
            cout << "Jogo" << endl;
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

        cin.get();

        int matrizGabarito[TAM][TAM];
        int matrizJogo[TAM][TAM];

        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                matrizGabarito[i][j] = matrizPrincipal[j][i];
                cout << matrizGabarito[i][j];
                if(j == 2 || j == 5 || j == 8){
                    cout << " | ";
                }
            }
            cout << endl;
        }

        cin.get();
        // while (game)
        // {
        //     if (newGame)
        //     {
        //         srand(time(NULL));
        //         do
        //         {
        //             type = rand() % 10;
        //             cout << type << endl;
        //             cin.get();
        //         } while (type > 2);

        //         switch(type){
        //             case 0:
        //                 break;
        //             case 1:
        //                 break;
        //             case 2:
        //                 break;
        //         }

        //         newGame = false;
        //     }

        // }
    }
    // preencher
    // deletar
    // editar
    // sair
    return 0;
}