/*
page 34
program 2.5
Write a C++ program that will ask a temperature in Fahrenheit and display it in Celsius.


Relationship between Celsius and Fahrenheit is governed by the formula
F = (9C/5) + 32;
C = ((F-32)*5)/9;

*/
///Temperature conversion
///Program Begin
#include<iostream>
using namespace std;
int main()
{
    float Fahrenheit, Celsius;
    cout << "Enter temperature in Fahrenheit\n";
    cin >> Fahrenheit;
    Celsius = ((Fahrenheit - 32)*5)/9;
    cout << Fahrenheit << " F = " << Celsius << "C\n";
    return 0;
}
//main end
///Program end
/*
output
Enter temperature in Fahrenheit
78
78 F = 25.5556C

Process returned 0 (0x0)   execution time : 2.953 s
Press any key to continue.
*/
