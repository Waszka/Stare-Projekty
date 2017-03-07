#include <iostream>
using namespace std;
int wybor, wyborK, wyborP, wyborP1, wyborP2, wyborP3, wyborP4, wyborP5, wyborW;
float x, y, h, wynik;
int main()
{
    cout << "Wzory i Przelicznik" << "\nBy Chant\n\n";
    while(true)
    {
        MenuG:
        cout << "1-Kalkulator\n"
             << "2-Przelicznik\n"
             << "3-Wzory\n"
             << "4-Wyjscie\n\n"
             << "Co chcesz zrobic? ";
        cin >> wybor;
        system( "cls" );
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
                "5-Powrot do menu\n\n" <<
                "Co chcesz zrobic? ";
        cin >> wyborK;
        if(wyborK == 5)
        {
            system( "cls" );
            goto MenuG;
        }

            cout << "\nPodaj pierwsza wartosc:";
            cin >> x;
            cout << "Podaj druga wartosc:";
            cin >> y;

            if(wyborK == 1)
                {
                    wynik = x + y;
                }
            else if(wyborK == 2)
                {
                    wynik = x - y;
                }
            else if(wyborK == 3)
                {
                    wynik = x * y;
                }
            else if(wyborK == 4)
                {
                    wynik = x / y;
                }
            cout << "\nWynik to:"
                 << wynik
                 << "\n\n";
            }
            if(wybor == 2)
            {
                MenuPrzelicznik:
                cout << "\n1-Milimetry na...\n"
                     << "2-Centymetry na...\n"
                     << "3-Decymetry na...\n"
                     << "4-Metry na...\n"
                     << "5-Kilometry na...\n"
                     << "6-Powrot do menu\n\n"
                     << "Wybierz jednostke, ktora chcesz zamienic: ";
                cin >> wyborP;
                system( "cls" );
                if(wyborP == 6)
                {
                 system( "cls" );
                 goto MenuG;
                }
                if(wyborP == 1)
                {
                    cout << "\n1-Centymetry\n"
                         << "2-Decymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Cofnij\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wyborP1;
                    if(wyborP1 == 5)
                    {
                        system( "cls" );
                        goto MenuPrzelicznik;
                    }
                    if(wyborP1 == 1)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wyborP1 == 2)
                    {
                        float przelicznik = 0.01;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wyborP1 == 3)
                    {
                        float przelicznik = 0.001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wyborP1 == 4)
                    {
                        float przelicznik = 0.000001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " milimetrow to:" << wynik << " kilometrow\n\n";
                    }
                }
                if(wyborP == 2)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Decymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Cofnij\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wyborP2;
                         system( "cls" );
                    if(wyborP2 == 5)
                    {
                        system( "cls" );
                        goto MenuPrzelicznik;
                    }
                    if(wyborP2 == 1)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wyborP2 == 2)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wyborP2 == 3)
                    {
                        float przelicznik = 0.01;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wyborP2 == 4)
                    {
                        float przelicznik =  0.00001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " centymetrow to:" << wynik << " kilometrow\n\n";
                    }
                }
                if(wyborP == 3)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Metry\n"
                         << "4-Kilometry\n"
                         << "5-Cofnij\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wyborP3;
                         system( "cls" );
                    if(wyborP3 == 5)
                    {
                        system( "cls" );
                        goto MenuPrzelicznik;
                    }
                    if(wyborP3 == 1)
                    {
                        float przelicznik = 100;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wyborP3 == 2)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " centytrow\n\n";
                    }
                    if(wyborP3 == 3)
                    {
                        float przelicznik = 0.1;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " metrow\n\n";
                    }
                    if(wyborP3 == 4)
                    {
                        float przelicznik = 0.0001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " decymetrow to:" << wynik << " kilometrow\n\n";
                    }
                }
                if(wyborP == 4)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Decymetrow\n"
                         << "4-Kilometry\n"
                         << "5-Cofnij\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wyborP4;
                         system( "cls" );
                    if(wyborP4 == 5)
                    {
                        system( "cls" );
                        goto MenuPrzelicznik;
                    }
                    if(wyborP4 == 1)
                    {
                        float przelicznik = 1000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wyborP4 == 2)
                    {
                        float przelicznik = 100;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wyborP4 == 3)
                    {
                        float przelicznik = 10;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wyborP4 == 4)
                    {
                        float przelicznik = 0.001;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " metrow to:" << wynik << " kilometrow\n\n";
                    }
                }
                if(wyborP == 5)
                {
                    cout << "\n1-Milimetry\n"
                         << "2-Centymetry\n"
                         << "3-Decymetrow\n"
                         << "4-Metrow\n"
                         << "6-Cofniij\n\n"
                         << "Wybierz na jaka jednostke chcesz zamienic: ";
                         cin >> wyborP5;
                         system( "cls" );
                    if(wyborP5 == 5)
                    {
                        system( "cls" );
                        goto MenuPrzelicznik;
                    }
                    if(wyborP5 == 1)
                    {
                        float przelicznik = 1000000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " milimetrow\n\n";
                    }
                    if(wyborP5 == 2)
                    {
                        float przelicznik = 100000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " centymetrow\n\n";
                    }
                    if(wyborP5 == 3)
                    {
                        float przelicznik = 10000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " decymetrow\n\n";
                    }
                    if(wyborP5 == 4)
                    {
                        float przelicznik = 1000;
                        cout << "\nPodaj liczbe:";
                        cin >> x;
                        wynik = x * przelicznik;
                        cout << "\n";
                        cout << x << " kilometrow to:" << wynik << " metrow\n\n";
                    }
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
                     << "7-Powrot do menu\n\n"
                     << "Co chcesz zrobic? ";
                     cin >> wyborW;
                     system( "cls" );

                     if(wyborW == 7)
                     {
                        system( "cls" );
                        goto MenuG;
                     }
                     else if(wyborW == 1)
                        {
                            cout << "\nPodaj podstawe:";
                            cin >> x;
                            cout << "Podaj wysokosc:";
                            cin >> h;
                            wynik = (x * h)/2;
                        }
                     else if(wyborW == 2)
                        {
                            cout << "\nPodaj pierwszy bok:";
                            cin >> x;
                            cout << "\nPodaj drugi bok:";
                            cin >> y;
                            wynik = x * y;
                        }
                     else if(wyborW == 3)
                        {
                            cout << "\nPodaj bok:";
                            cin >> x;
                            wynik = x * x;
                        }
                     else if(wyborW == 4)
                        {
                            cout << "\nPodaj dlugosc pierwszej podstawy:";
                            cin >> x;
                            cout << "\nPodaj dlugosc drugiej podstawy:";
                            cin >> y;
                            cout << "\nPodaj wysokosc:";
                            cin >> h;
                            wynik = ((x + y)*h)/2;
                        }
                    else if(wyborW == 5)
                        {
                            cout << "\nPodaj dlugosc podstawy:";
                            cin >> x;
                            cout << "\nPodaj wysokosc:";
                            cin >> h;
                            wynik = x * h;
                        }
                    else if(wyborW == 6)
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
