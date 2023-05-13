#include <iostream>
#include <vector>
#include <string>

#include <main.h>
#include <cout_example.h>

using namespace std;

void hello_world(void)
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

void inter(void)
{
    int int_only = 0;               // Speicherbreite nach Betriebssystem, 2 byte bei 16 bit, 4 byte bei 32 bit und 8 byte bei 64 bit
    short int int_short = 0;        // Explizit 2 byte
    long int int_long = 0;          // Explizit 4 byte
    signed short int int_ssi = 0;   // Explizit mit Vorzeichen, 2 byte
    unsigned int int_unsigned = 0;  // Ohne Vorzeichen
    static int int_static = 42;     // Konstante
}

void character(void)
{
    char character;             // -128 t 128, 1 byte 
    unsigned char character2;   // 0 bis 255 , 1 byte
}

void floating_point(void)
{
    float floating_point = 0;   // 4 byte , 6 Stellen Genauigkeit
    double float_double = 0;    // 8 byte, 15 Stellen Genauigkeit
    long double float_ld = 0;   // 10 byte, 19 Stellen Genauigkeit
}

void boolean(void)
{
    bool flag; // 1 bit
}

int main(int argc, char *argv[])
{
    short int flag = 1;         // Return value flag

    //hello_world();            // Call function 
    affe();
    cin.get();                  // Wait for user input
    return 0;                   // Termination code
}
