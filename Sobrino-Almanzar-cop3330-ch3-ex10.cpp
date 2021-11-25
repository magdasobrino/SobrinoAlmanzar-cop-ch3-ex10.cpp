/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Magdalena Sobrino-Almanzar
 */
//github.com/magdasobrino/SobrinoAlmanzar-cop3330-ch3-ex10//


#include <iostream>
#include <string>

using namespace std;

int main()
{
string operation;
double value1;
double value2;

cout << "Please select an operation: +,-,*,/, plus, minus, multiplication or division.\n";
cin >> operation;

cout << "Please enter two integers or decimals: \n";
cin >> value1 >> value2;

cout << "You entered: " << operation << " " << value1 << " " << value2 << endl;

if (operation == "+" || operation == "plus")
    cout << "The program will add " << value1 << " to " << value2 << " which is " << value1 + value2 << endl;
else if(operation == "-" || operation == "minus")
    cout << "The program will subtract " << value1 << " from " << value2 << " which is " << value1 - value2 << endl;
else if (operation == "*" || operation == "mul")
    cout << "The program will multiply " << value1 << " and " << value2 << " which is " << value1 * value2 << endl;
else if (operation == "/" || operation == "div")
    cout << "The program will divide " << value1 << " by " << value2 << " which is " << value1 / value2 << endl;
else cout << "Sorry, that operation is not valid.\n";

return 0;
}
