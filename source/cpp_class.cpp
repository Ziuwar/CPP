/**
  ******************************************************************************
  * @file           : main.cpp
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

#include <cpp_class.h>

// Function for adding two integers
int Calculator::add(int num1, int num2) {
  return num1 + num2;
}
// Function for subtracting two integers
int Calculator::subtract(int num1, int num2) {
  return num1 - num2;
}
 // Function for multiplying two integers
int Calculator::multiply(int num1, int num2) {
  return num1 * num2;
}
// Function for dividing two integers
int Calculator::divide(int num1, int num2) {
  if(num2 == 0) {
    return 0;
  }
  else {
    return num1 / num2;
  }
}