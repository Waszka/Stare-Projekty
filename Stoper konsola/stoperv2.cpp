#include <time.h>
#include <iostream>

using namespace std;

clock_t czas_sek, czas_min, czas_godz;
int wyswietl = 0;
int main()
{

        while(czas_sek != 60)
        {
            czas_sek = clock()/1000;
            if(czas_sek == 60)
            {
              while(czas_min != 60)
              {
                 czas_min = clock()/1000;
                 if(czas_min == 60)
                 {
                   while(czas_godz != 60)
                   {
                        czas_godz = clock()/1000;
                   }
                 }


              }
            }
            if(czas_sek == wyswietl)
            {
                cout << czas_godz/3600 << ":" << czas_min/60 << ":" << czas_sek << endl;
                wyswietl++;
            }

        }

}

