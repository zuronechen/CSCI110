/* 
Description: A program that reads a user input array until termination by Q, then allocates the array of correct size and copies all inputs into it.
Author: Zurone Chen
Input Variables: double *initial_array; double* new_array;
Process Flow: while reading the values of an array, the size changes according to the number of inputted elements, then prints all elements.
Output Variables: new_array
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

double* read_data(int& size)
{
    int initial_size;
    int temp;
    double* initial_array = new double[10];

    cout << "Please enter numbers for an array, Q to quit: "; // read data
    for (int i = 0; i < 10; i++)
    {
        cin >> initial_array[i];
        size++;
    }
    cout << "Array size: " << size << endl;
    
    if (size == 10)
    {
        temp = size;
        initial_size = temp;
        size = size * 2; // double array size when the array fills up with 10 values
    }

    double* new_array = new double[size];
    for (int i = 0; i < size; i++)
    {
        new_array[i] = initial_array[i];
    }
    delete []initial_array; // delete first array once copied to the new array with double capacity

    int new_size = 0;

    cout << "Please enter more numbers for the array, Q to quit: "; // keep reading data
    for (int i = initial_size; i < size; i++)
    {
        cin >> new_array[i];
        if (cin.fail())
        {
            new_size--;
            size--;
        }
        new_size++;
    }
    cout << "Array size: " << new_size << endl << endl;

    size = initial_size + new_size;

    return new_array;
}

int main()
{
    int size = 0;
    double* array = read_data(size);

    cout << "Final array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Final array size: " << size << endl;
    

    //system("pause")
    return 0;
}
