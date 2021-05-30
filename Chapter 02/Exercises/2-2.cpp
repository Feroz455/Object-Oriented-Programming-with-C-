/*
page 34
Program 2.2
Write a program to read two numbers from the keyboard and display the larger
value on the screen.
*/

//Printing larger value
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num1, num2,larger;
    cout << "Enter two positive number\n";
    cin >> num1 >> num2;
    //checking larger number
    larger = (num1 > num2) ? num1:num2 ;
    cout << "larger number is " << larger << "\n";

    return 0;
}
/**
output
Enter two positive number
45
78
larger number is 78

Process returned 0 (0x0)   execution time : 1.359 s
Press any key to continue.
*/
