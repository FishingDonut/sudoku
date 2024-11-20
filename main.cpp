#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int menu, times;
    bool end = false;

    times = time(nullptr);

    while (!end)
    {
        system("cls");
        cout << "[MENU]\n(0) jogar\n(1) sobre\n(2) Sair" << endl;

        cin >> menu;
        switch (menu)
        {
        case 0:
            cout << "Jogo" << endl;
            break;
        case 1:
            cout << "Daniel Uesler de Brito\tNovembro/2024\nProfessor:" << endl;
            cout << difftime(times, time(nullptr));
            cin.get();
            cin.get();
            break;
        case 2:
            cout << "Sair" << endl;
            end = true;
            break;
        }
    }

    //preencher
    //deletar
    //editar
    //sair
    return 0;
}