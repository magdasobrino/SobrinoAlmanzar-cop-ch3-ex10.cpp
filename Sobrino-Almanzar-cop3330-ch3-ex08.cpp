/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Magdalena Sobrino-Almanzar
 */

//SobrinoAlmanzar-cop-ch3-ex08.cpp//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;

    cout << "Enter an integer: ";
    if (cin >> number)
    {
        if ((number % 2) == 0)
            cout << "\nThe value " << number << " is even.";
        else
            cout << "\nThe value " << number << " is odd.";
    }
    else
        cout << "The value is invalid";

    return 0;
}

