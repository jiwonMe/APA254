/**
 * @file 3.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Assignment 1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Write a template function `count` that returns the number of occurrences of
 * `value` in the array `a[0:n-1]`. Test your code.
 */
#include <iostream>

using namespace std;

/**
 * @brief count the number of occurrences of `value` in array 
 * 
 * @tparam T type of value
 * @param value T: value that evaluate the occurrences
 * @param begin T*: pointer of begin of array
 * @param end T*: pointer of end of array
 * @return int: the number of occurrence
 */
template <class T>
int count(T value, T* begin, T* end)
{
    if ( begin == end ) return 0;
    return (*begin == value ? 1 + count(value, begin+1, end) : count(value, begin+1, end));
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 1, 2, 2, 2 };
    cout << count(2, begin(arr), end(arr)) << endl;
}