/*
Let us consider a slightly more complex C++ program.Assume that we would like to read
two numbers from the keyboard and display their average on the screen.C++ statements to
accomplish this is shown in program 2.2
*/
///Average of two numbers
#include<iostream>

using namespace std;
int main()
{
    float number1, number2, sum, average;
    cout << "Enter two numbers: \n"; /// prompt
    cin >> number1; // Reads numbers
    cin >> number2;// from keyboard

    sum = number1 + number2;
    average = sum / 2;

    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";

    return 0;
}
/**
Enter two numbers:
12
45
Sum = 57
Average = 28.5

Process returned 0 (0x0)   execution time : 3.078 s
Press any key to continue.
*/
