#include <iostream>
using namespace std;

int main()
{
    int menu;
    bool end = false;

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
            cin.get();
            cin.get();
            break;
        case 2:
            cout << "Sair" << endl;
            end = true;
            break;
        }
    }

    return 0;
}