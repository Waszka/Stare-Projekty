#include <iostream>
using namespace std;
int wybor;
float x, y, h, wynik;
int main()
{
    cout << "Wzory i Przelicznik" << "\nBy Chant\n\n";
    while(true)
    {
        MenuWzoryPrzelicznik:
        cout << "1-Kalkulator\n"
             << "2-Przelicznik\n"
             << "3-Wzory\n"
             << "4-Wyjscie\n\n"
             << "Co chcesz zrobic? ";
        cin >> wybor;
            if(wybor == 4)
            {
                break;
            }
            if(wybor == 1)
            {
                cout << "\n1-Dodawanie\n" <<
                "2-Odejmowanie\n" <<
                "3-Mnozenie\n" <<
                "4-Dzielenie\n" <<
                "5-Wyjscie\n" <<
                "6-Cofnij\n\n" <<
                "Co chcesz zrobic? ";
        cin >> wybor;
        if(wybor == 6)
        {
            goto MenuWzoryPrzelicznik;
        }
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
            if(wybor == 2)
            {
                cout << "\n1-Milimetry na...\n"
                     << "2-Centymetry na...\n"
                     << "3-Decymetry na...\n"
                     << "4-Metry na...\n"
                     << "5-Kilometry na...\n"
                     << "6-Wyjscie\n\n"
                     << "Wybierz jednostke, ktora chcesz zamienic: ";
                cin >> wybor;
                if(wybor == 1)
                {
                    cout << "\n1-Centymetry\n"
                         << "2-Decymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Wyjscie\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wybor;
                    if(wybor == 1)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wybor == 2)
                    {
                        float przelicznik = 0.01;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wybor == 3)
                    {
                        float przelicznik = 0.001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wybor == 4)
                    {
                        float przelicznik = 0.000001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " kilometrow\n\n";
                    }
                    if(wybor == 5)
                    {
                        break;
                    }
                }
                if(wybor == 2)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Decymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Wyjscie\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wybor;
                    if(wybor == 1)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wybor == 2)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wybor == 3)
                    {
                        float przelicznik = 0.01;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wybor == 4)
                    {
                        float przelicznik =  0.00001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " kilometrow\n\n";
                    }
                    if(wybor == 5)
                    {
                        break;
                    }
                }
                if(wybor == 3)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Wyjscie\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wybor;
                    if(wybor == 1)
                    {
                        float przelicznik = 100;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wybor == 2)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " centytrow\n\n";
                    }
                    if(wybor == 3)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wybor == 4)
                    {
                        float przelicznik = 0.0001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " kilometrow\n\n";
                    }
                    if(wybor == 5)
                    {
                        break;
                    }
                }
                if(wybor == 4)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Decymetrow\n"
                         << "4-Kilometry\n"
                         << "5-Wyjscie\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wybor;
                    if(wybor == 1)
                    {
                        float przelicznik = 1000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wybor == 2)
                    {
                        float przelicznik = 100;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wybor == 3)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wybor == 4)
                    {
                        float przelicznik = 0.001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " kilometrow\n\n";
                    }
                    if(wybor == 5)
                    {
                        break;
                    }
                }
                if(wybor == 5)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Decymetrow\n"
                         << "4-Metrow\n"
                         << "5-Wyjscie\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wybor;
                    if(wybor == 1)
                    {
                        float przelicznik = 1000000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wybor == 2)
                    {
                        float przelicznik = 100000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wybor == 3)
                    {
                        float przelicznik = 10000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wybor == 4)
                    {
                        float przelicznik = 1000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " metrow\n\n";
                    }
                    if(wybor == 5)
                    {
                        break;
                    }
                }
                if(wybor == 6)
                {
                    break;
                }
            }
            if(wybor == 3)
            {
                cout << "\n1-Pole trojkata\n"
                     << "2-Pole prostokata\n"
                     << "3-Pole kwadrata\n"
                     << "4-Pole trapezu\n"
                     << "5-Pole rownolegloboku\n"
                     << "6-Pole rombu\n"
                     << "7-Wyjscie\n\n"
                     << "Co chcesz zrobic? ";
                     cin >> wybor;

                     if(wybor == 7)
                        {
                            break;
                        }
                     else if(wybor == 1)
                        {
                            cout << "\nPodaj podstawe:";
                            cin >> x;
                            cout << "Podaj wysokosc:";
                            cin >> h;
                            wynik = (x * h)/2;
                        }
                     else if(wybor == 2)
                        {
                            cout << "\nPodaj pierwszy bok:";
                            cin >> x;
                            cout << "\nPodaj drugi bok:";
                            cin >> y;
                            wynik = x * y;
                        }
                     else if(wybor == 3)
                        {
                            cout << "\nPodaj bok:";
                            cin >> x;
                            wynik = x * x;
                        }
                     else if(wybor == 4)
                        {
                            cout << "\nPodaj dlugosc pierwszej podstawy:";
                            cin >> x;
                            cout << "\nPodaj dlugosc drugiej podstawy:";
                            cin >> y;
                            cout << "\nPodaj wysokosc:";
                            cin >> h;
                            wynik = ((x + y)*h)/2;
                        }
                    else if(wybor == 5)
                        {
                            cout << "\nPodaj dlugosc podstawy:";
                            cin >> x;
                            cout << "\nPodaj wysokosc:";
                            cin >> h;
                            wynik = x * h;
                        }
                    else if(wybor == 6)
                        {
                            cout << "\nPodaj dlugosc pierwszej przekatnej:";
                            cin >> x;
                            cout << "\nPodaj dlugosc drugiej przekatnej:";
                            cin >> y;
                            wynik = (x * y)/2;
                        }
                    cout << "\nPole wynosi: "
                         << wynik
                         << "\n\n";
            }
    }
    cout <<"\nDo zobaczenia!\n";
    return 0;
}
