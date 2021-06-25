/*
page 400
Exception Handling
program 13.1
Write a program containing a possible exception.
Use a try block to throw it and a catch block to handle it properly


*/
#include<iostream>
#include<cctype>
using namespace std;

//main begin
int main()
{
    char i;
    cout << "Enter a number\n";
    cin >> i;
    try
    {
        if(isdigit(i))
            cout << "Its a number\n";
        else
            throw i;
    }
    catch(char i)
    {
        cout << "Its a Alphabet\n";

    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter a number
6
Its a number

Process returned 0 (0x0)   execution time : 2.031 s
Press any key to continue.

*/
