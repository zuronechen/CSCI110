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

int* read_data(int& size)
{
    int* arr = new int[10];
    int s = 0, i = 10;
    char input[10]; 
    cout << "Enter salaries, enter Q to quit: ";
    bool more = true;
    while (true)
    {
        cin >> input;
        if (cin.fail())
        {
            more = false; {break; }
        }
    }
    cin.clear(); // reset if more input is to be taken

}

int main()
{

    //system("pause")
    return 0;
}
