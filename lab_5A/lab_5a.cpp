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

const int CAPACITY = 10;

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size == b_size)
    {
        for (int i = 0; i < a_size; i++) // once the arrays pass the length test, this will check for equality of values 
        {
            if (a[i] != b[i])
            {
                return false; 
            }
        }
        return true;
    }
    else
    {
        return false; // if the array sizes are different, return false
    }
}


int main() 
{
    int first_array[20], second_array[20];
    int first_size, second_size;

    cout << "Please enter the first array size: "; // declare first array length
    cin >> first_size; // store first array length

    cout << "Please enter the first array: "; 
    for (int i = 0; i < first_size; i++)
    {
        cin >> first_array[i]; // store each value of first array one by one
    }

    cout << "Please enter the second array size: "; // declare second array length
    cin >> second_size; // store second array length

    cout << "Please enter the second array: ";
    for (int i = 0; i < second_size; i++)
    {
        cin >> second_array[i]; // store each value of second array one by one 
    }
    cout << endl;

    cout << "first array: ";
    for (int i = 0; i < first_size; i++)
    {
        cout << first_array[i] << " "; // display each value of first array separated by space
    }
    cout << endl;

    cout << "second array: ";
    for (int i = 0; i < second_size; i++)
    {
        cout << second_array[i] << " "; // display each value of second array separated by space
    }
    cout << endl;

    if (equals(first_array, first_size, second_array, second_size)) // calling the bool function 
    {
        cout << "Both arrays are the same." << endl;
    }
    else
    {
        cout << "The two arrays are different." << endl;
    }

//system("pause");
return 0;
}   