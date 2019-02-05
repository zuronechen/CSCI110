// #include "stdafx.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
    float time_1;
    float time_2;
    const int minutes = 60;
    const int hours = 60 * minutes;
    const float midnight = 24 * hours;

    
    //Ask the user to input time 1 and time 2

    cout << "Please enter the the first time: " << endl;
    cin >> time_1;
    cout << "Please enter the second time: " << endl;
    cin >> time_2;

    //First case where time 1 is less than time 2:

    int firstcase_difference = (time_2 - time_1);
    int firstcase_hours = firstcase_difference / 100;
    int firstcase_minutes = (firstcase_difference % 100);

    //Second case where time 1 is more than time 2: 

    int secondcase_difference = (midnight - time_1) + time_2;
    int secondcase_hours = secondcase_difference / 100;
    int secondcase_minutes = (secondcase_difference % 100);
    
    if (time_1 < time_2)
    {
        cout << "The total amount of time in between is: " << firstcase_hours << " hours" << " and " << firstcase_minutes << " minutes" << endl;
    }
    else 
    {
        cout << "The total amount of time in between is: " << secondcase_hours << " hours" << " and " << secondcase_minutes << " minutes" << endl;
    }
    
    // system("pause"); 
    
    return 0;
}