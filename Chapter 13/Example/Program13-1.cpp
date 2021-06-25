/*
page 383
Exception Handling
program 13.1
Try Block Throwing an Exception
*/
#include<iostream>
using namespace std;

//main begin
int main()
{
    int a, b;
    cout << "Enter values of a and b\n";
    cin >> a >> b;
    int x = a - b;

    try
    {
        if(x != 0)
        {
            cout << "Result (a/x) = " << a / x << "\n";
        }
        else //There is an exception
        {
            throw(x); //Throws int object
        }
    }
    catch(int i) // catches the exception
    {
        cout << "Exception caught : DIVIDE BY ZERO\n";
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter values of a and b
10
10
Exception caught : DIVIDE BY ZERO


Process returned 0 (0x0)   execution time : 3.867 s
Press any key to continue.
*/
