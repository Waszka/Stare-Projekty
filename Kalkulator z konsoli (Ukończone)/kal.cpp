#include<iostream>
#include <conio.h>
using namespace std;
int wybor;
float x, y, wynik;
int main()
{
    cout << "KALKULATOR\nBy Chant\n\n";
    while(true)
    {
        cout << "1-Dodawanie\n" <<
                "2-Odejmowanie\n" <<
                "3-Mnozenie\n" <<
                "4-Dzielenie\n" <<
                "5-Wyjscie\n\n" <<
                "Co chcesz zrobic? ";
        cin >> wybor;
        if(wybor == 5 )
            {
             break;
            }

        cout << "\nPodaj pierwsza wartosc:";
        cin >> x;
        cout << "Podaj druga wartosc:";
        cin >> y;

        if(wybor == 1)
            {
                wynik = x + y;
            }
        else if(wybor == 2)
            {
                wynik = x - y;
            }
        else if(wybor == 3)
            {
                wynik = x * y;
            }
        else if(wybor == 4)
            {
                wynik = x / y;
            }
        cout << "\nWynik to:"
             << wynik
             << "\n\n";
    }
    cout <<"\nDo zobaczenia!";
    getch();
    return 0;
}
