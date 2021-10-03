/**
 * @file 2.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Assignment 1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
    swap(a, b); // imported code
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}