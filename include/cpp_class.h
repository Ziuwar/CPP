/**
  ******************************************************************************
  * @file           : cpp_class.h
  * @brief          : Cpp_class program body header file
  ******************************************************************************
  * @attention
  ******************************************************************************
**/

// Define to prevent recursive inclusion
#ifndef __CPP_CLASS_H
#define __CPP_CLASS_H

#ifdef __cplusplus
extern "C" {
#endif

// Calculator class definition
class Calculator {
    public:
        // Function for adding two integers
        int add(int num1, int num2);

        // Function for subtracting two integers
        int subtract(int num1, int num2);

        // Function for multiplying two integers
        int multiply(int num1, int num2);

        // Function for dividing two integers
        int divide(int num1, int num2);
};

#ifdef __cplusplus
}
#endif
#endif /* __CPP_CLASS_H */