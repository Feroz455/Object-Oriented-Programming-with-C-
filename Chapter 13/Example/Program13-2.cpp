/*
page 385
Exception Handling
program 13-2
Invoking Function that Generates Exception
*/
#include<iostream>
using namespace std;
//Throw point outside the try block


void divide(int x, int y, int z)
{
    cout << "\nWe are inside the function\n";
    if(x -y != 0) // it is ok
    {
        int R = z / (x - y);
        cout << "Result = " << R << "\n";
    }
    else
    {
         throw(x-y); //Throw point
    }
}
//main begin
int main()

{

    try
    {
        cout << "We are inside the try block\n";
        divide(10,20,30); //Invoking divide
        divide(10,10,20); //Invoking divide()

    }
    catch(int)
    {
        cout << "Caught the exception" << " " << endl;
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
We are inside the try block

We are inside the function
Result = -3

We are inside the function
Caught the exception



Process returned 0 (0x0)   execution time : 1.628 s
Press any key to continue.
*/
