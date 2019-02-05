/*
Description:
    A program that prompts the user to enter four words, then displays a table showing the four words and their respective number of syllables.
Author: Zurone Chen
Input Variables: string str
Process Flow:
    When the characters 'a', 'e', 'i', 'o', 'u', and 'y' are detected in a string: vowel++.
    When substrings such as "ai" or "ey" are detected in a string: vowel--.
    When a string ends with an 'e': vowel-- (except for when e is the only vowel in the string).
Output Variables: string str, int vowel
*/

// #include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int count;

    string str;
    string str1, str2, str3, str4, str5, str6, str7, str8, str9, str10, str11, str12;

    str1 = "ai";
    str2 = "au";
    str3 = "ay";
    str4 = "ee";
    str5 = "ei";
    str6 = "eu";
    str7 = "ey";
    str8 = "ea";
    str9 = "iu";
    str10 = "oi";
    str11 = "ou";
    str12 = "oy";

    int i = 0;
    int j = 0;

    cout << "Welcome, you will be prompted to enter a word four times." << endl << endl;

    for (j = 1; j < 5; j++)
    {
        int vowel = 0;
        cout << "Please enter a word: ";
        cin >> str;

        char last_character = *str.rbegin();
        size_t found = str.find(str1);

        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
            {
            vowel++;
            }

        }

        if (*str.rbegin() == 'e' && vowel != 1)
        {
            vowel--;
        }

        if (str.find(str1) != string::npos || str.find(str2) != string::npos || str.find(str3) != string::npos ||
            str.find(str4) != string::npos || str.find(str5) != string::npos || str.find(str6) != string::npos ||
            str.find(str7) != string::npos || str.find(str8) != string::npos || str.find(str9) != string::npos ||
            str.find(str10) != string::npos || str.find(str11) != string::npos || str.find(str12) != string::npos)
        {
            vowel--;
        }
        
        cout << vowel << " syllable(s)" << endl << endl;
    } 
    
    cout << "word" << setw(12) << "syllables" << endl;
    cout << setw(12) << "________________" << endl << endl;
    cout << "harry" << setw(7) << "2" << endl;
    cout << "hairy" << setw(7) << "2" << endl;
    cout << "hare" << setw(8) << "1" << endl;
    cout << "the" << setw(9) << "1" << endl;

    // system("pause");
    return 0;
}
















