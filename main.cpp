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

using namespace std;

// User header files
#include <main.h>
#include <variables.h>
#include <cout_example.h>
#include <hello_world.h>

int main(int argc, char *argv[])
{
    short int flag = 1;         // Return value flag
    
    //hello_world();            // Call function 
    cout_example();
    cin.get();                  // Wait for user input
    return 0;                   // Termination code
}
