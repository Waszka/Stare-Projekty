#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
main()
{
        int stopy;
        float metry;
        float przelicznik = 0.3;
        cout << "Podaj wysokosc w stopach : ";
        cin >> stopy;
        metry = stopy * przelicznik;
        cout << "\n";
        cout << stopy << "stop- to jest : " << metry << "metrow\n ";
        getch();
        return 0;
}
