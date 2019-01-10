// #include "stdafx.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
    float time_1;
    float time_2;
    const float midnight = 2360;
    
    

    cout << "Please enter the the first time: " << endl;
    cin >> time_1;
    cout << "Please enter the second time: " << endl;
    cin >> time_2;

    int total_1 = (time_2 - time_1);
    int total_2 = (midnight - time_1) + time_2;

    if (time_1 < time_2)
        cout << "The total amount of time in between is: " << (total_1 / 100) << " hours" << " and " << (total_1 % 100) << " minutes" << endl;
    else
        cout << "The total amount of time in between is: " << (total_2 / 100) << " hours" << " and " << (total_2 % 100) << " minutes" << endl;
    
    // system("pause"); 
    
    return 0;
}

