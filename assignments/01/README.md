# APA254 Assignment 01

> Do not be submit this as a your assignment.

## 1.

```shell
Before Swap
a= 45 b = 35
After Swap with pass by pointer
a = 35 b = 45
```

## 2.

```diff
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
+   swap(a, b);
    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}
```

## 3.

```cpp
template <class T>
int count(T value, T* begin, T* end)
{
    if ( begin == end ) return 0;
    return (*begin == value ? 1 + count(value, begin+1, end) : count(value, begin+1, end));
}

int main()
{
    int value = 3; // value that want to find
    int arr[10] = { 1, 2, 7, 4, 5, 6, 1, 2, 0, 2 };
    cout << count(value, begin(arr), end(arr)) << endl;
}
```

## 4.

```cpp
template<class T>
void transpose(T **a, int rows)
{// In-place transpose of matrix a[0:rows-1][0:rows-1]
    for (int i=0; i<rows; i++) // operation count: ${rows}
        for (int j=i+1; j<rows; j++) // operation count: rows(rows+1)/2
            swap(a[i][j], a[j][i]); // operation count: rows(rows-1)/2 (element in down-right diagonal will not swapped)
}

```

## 5.
`int* &ry` means `ry` is a "reference of `int*`", but rvalue is "reference of `int`".

below code is okay.

```cpp
int main(int argc, char** argv)
{
    int y = 1; // "y" is "int"
    int* a = &y; // "a" is "int*"
    int* &ry = a; // "ry" is "reference of int*"
    return 0;
}
```