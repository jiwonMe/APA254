/**
 * @file 5.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Assignment 1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

/**
 * `int* &ry` means `ry` is a "reference of int*",
 * but rvalue is "reference of int".
 * 
 * but below code is okay.
    int y = 1; // "y" is "int"
    int* a = &y; // "a" is "int*"
    int* &ry = a; // "ry" is "reference of int*"
 * 
 */
int main(int argc, char** argv)
{
    int y = 1;
    int* &ry = &y; // error occured : the initial value of non-const reference must be lvalue.
    cout << ry << endl;
    return 0;
}

