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
            cout << "Jogo";
            break;
        case 1:
            cout << "Sobre";
            break;
        case 2:
            cout << "Sair";
            end = true;
            break;
        }
    }

    return 0;
}