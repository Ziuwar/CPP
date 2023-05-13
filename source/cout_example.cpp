/*
oct, dec, hex           Darstellungsweise
setprecition(int)       Anzahl der Ziffern
setfill(int)            Füllmuster
setw(int)               Weite der Ausgabe
left / right            link- bzw. rechtsbündig
*/

#include <iostream>
#include <iomanip>

#include <cout_example.h>

using namespace std;

int affe(void)
{
    cout << setw(10) << setfill('#') << "Hallo" << endl;
    cout << setw(10) << setfill('#') << left << "Hallo" << endl;
    cout << setprecision(3) << 1.3541832 << endl;
    cout << "Dezimal    :" << 30 << endl;
    cout << "Oktal      :" << oct << 30 << endl;
    return 0;
}