// #include "stdafx.h"

#include <string>
#include <iostream>
#include <cmath>
#include <cstdlib>


using namespace std;;

int main()
{
    string letter_grade;
    string user_choice;
    float number;

    cout << "Please enter your letter grade (it may include + and -)" << endl;
    cin >> letter_grade;

    switch (letter_grade[0])
    {
    case 'A' :
        number = 4.0;
        break;
    case 'B':
        number = 3.0;
        break;
    case 'C':
        number = 2.0;
        break;
    case 'D':
        number = 1.0;
        break;
    case 'F':
        number = 0;
        break;
    default:
        cout << "Invalid grade" << endl;
    }
    
    if (letter_grade[1] == '+' && letter_grade[0] != 'A' && letter_grade[0] != 'F')
        cout << "Your GPA is " << number + 0.3 << endl;
    else if (letter_grade[0] == 'A' && letter_grade[1] != '-')
        cout << "Your GPA is 4.0" << endl;
    else if (letter_grade[0] == 'F')
        cout << "Your GPA is 0" << endl;
    else if (letter_grade[1] == '-')
        cout << "Your GPA is " << number - 0.3 << endl;

    cout << "Would you like to enter another grade? Type Y or N" << endl;
    cin >> user_choice;

    if (user_choice[0] == 'Y')
        



    // system("pause"); 

    return 0;
}


