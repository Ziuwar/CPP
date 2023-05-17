/**
  ******************************************************************************
  * @file           : main.cpp
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

// User header files
#include "include/main.h"
#include "include/variables.h"
#include "include/cout_example.h"
#include "include/hello_world.h"
#include "include/cpp_class.h"

int main(int argc, char *argv[])
{
  int buffer = 0;         // Return value flag
    //hello_world();            // Call function 
    //cout_example();

  Calculator C1;

  buffer = C1.add(200,24);


  return buffer;                   // Termination code
}
