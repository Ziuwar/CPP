/**
  ******************************************************************************
  * @file           : main.cpp
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

// External header files
#include <iostream>
#include <vector>
#include <string>

// User header files
#include <main.h>
#include <variables.h>
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

int main(int argc, char *argv[])
{
    short int flag = 1;         // Return value flag

    //hello_world();            // Call function 
    cout_example();
    cin.get();                  // Wait for user input
    return 0;                   // Termination code
}
