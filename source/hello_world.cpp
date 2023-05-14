/**
  ******************************************************************************
  * @file           : hello_world.cpp
  * @brief          : Hello_world program body
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

// External header files
#include <iostream>
#include <vector>
#include <string>

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