/* 
Description: A program that takes a user input array, then searches 
Author: Zurone Chen
Input Variables: 
Process Flow: 
Output Variables: 
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

// decreases the size of the array whenever the position reaches a duplicate
void decrease_size(int values[], int position, int &size)
{
    int i;
    for(i = position; i < size - 1; i++)
    {
        values[i] = values[i + 1];
    }
    size--;
}

// detects when there is a duplicate as i and j scan the array
void remove_duplicates(int values[], int &size) 
{
    int array;
    for(int i = 0; i < size; i++)
    {
        array = values[i];
        for(int j = i + 1; j < size; j++)
        {
            if(array == values[j])
            {
                decrease_size(values, j, size);
                j--;
            }
        }
    }
}

int main()
{
    int capacity = 10;
    int values[20];

    cout << "Please enter an array: "; // user inputs array
    for(int i = 0; i < capacity; i++)
    {
        cin >> values[i]; 
    }
    cout << endl;

    cout << "Array before removing duplicates: "; // show original array
    for(int i = 0; i < capacity; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    int size = 10;
    remove_duplicates(values, size);

    cout << "Array after removing duplicates: "; // show sorted array with new array size
    for(int i = 0; i < size; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl;

    // system("pause");
    return 0;
}

