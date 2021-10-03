/**
 * @file 4.cpp
 * @author Jiwon Park (park@jiwon.me)
 * @brief Assignment 1
 * @date 2021-10-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * How many swap operations are performed by function `transpose` (Program 2.19)?
 */

// Program 2.19
template<class T>
void transpose(T **a, int rows)
{// In-place transpose of matrix a[0:rows-1][0:rows-1]
    for (int i=0; i<rows; i++) // operation count: ${rows}
        for (int j=i+1; j<rows; j++) // operation count: rows(rows+1)/2
            swap(a[i][j], a[j][i]); // operation count: rows(rows-1)/2 (element in down-right diagonal will not swapped)
}
