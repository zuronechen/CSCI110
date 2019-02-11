/* 
Description: A program that reads a user input array and reverses the order of the values using pointers.
Author: Zurone Chen
Input Variables: double a[] (original array)
Process Flow: while reading the values of an array, the last position of the array gets swapped with the first position of the array.
Output Variables: reversed array
*/

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
    double *begin_pointer; // left scanner
    double *end_pointer;  // right scanner
    double temp; // for swapping variables
    end_pointer = a; // scan to the right 
    begin_pointer = a + (size - 1); // scan to the left  

    while (begin_pointer >= end_pointer)     
    {
        temp = *end_pointer; // swap position 
        *end_pointer = *begin_pointer;  
        *begin_pointer = temp;  
        end_pointer++; // continue scan  
        begin_pointer--;
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

