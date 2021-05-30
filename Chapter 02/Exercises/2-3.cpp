/*
page 34
program 2.3
Write a program to input an integer value from keyboard and display on screen
"WELL DONE" that many times.
*/
///program begin
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter an integer number\n";
    cin >> number;
    //Star loop
    for(int i = 0; i < number; i++)
    {
        cout << "\"WELL DONE\"\n";
    }
}
//main function end
///Program end
/*
output
Enter an integer number
5
"WELL DONE"
"WELL DONE"
"WELL DONE"
"WELL DONE"
"WELL DONE"

Process returned 0 (0x0)   execution time : 2.000 s
Press any key to continue.

*/
