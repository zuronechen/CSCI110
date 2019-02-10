// #include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

void reverse(double* a, int size)
{
    double *first; // first position of array
    double *last; // second position of array
    double temp; // for swapping variables
    last = a; // scan to the right
    first = a + (size - 1); // scan to the left

    while (left >= right)
    {
        temp = *last; // swap position
        *last = *first; 
        *first = temp; 
        last++; // continue scan
        first--;

    }
}

int main()
{
    int size = 10;
    double a[20];
    cout << "Please enter an array of numbers: "; 
    for (int i = 0; i < size; i++)
    {
        cin >> a[i]; 
    }

    reverse(&a[0], size);
    cout<<"The array after reversal: ";
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    //system("pause")
    return 0;
}

