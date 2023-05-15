/**
  ******************************************************************************
  * @file           : main.cpp
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

// User header files
#include <main.h>
#include <variables.h>
#include <cout_example.h>
#include <hello_world.h>
#include <cpp_class.h>

int main(int argc, char *argv[])
{
  int buffer = 0;         // Return value flag
    //hello_world();            // Call function 
    //cout_example();

  Calculator C1;

  buffer = C1.add(4,3);


  return buffer;                   // Termination code
}
