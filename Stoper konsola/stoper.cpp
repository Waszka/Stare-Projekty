#include <time.h>
#include <iostream>

using namespace std;

clock_t czas_sek;
int wyswietl = 0;
int main()
{

        while(czas_sek < 100000000)
        {
            czas_sek = clock()/1000;
            if(czas_sek == wyswietl)
            {
                cout << czas_sek << endl;
                wyswietl++;
            }

        }

}
