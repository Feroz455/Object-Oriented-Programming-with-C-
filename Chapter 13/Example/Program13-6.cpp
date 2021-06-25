/*
page 391
Exception Handling
program 13 - 6
Rethrowing an Exception
*/
#include<iostream>
using namespace std;
void divide(double x, double y)
{
    cout << "Inside function\n";
    try
    {
        if(y == 0.0)
            throw y; //Throwing double
        else
            cout << "Division = " << x/y << "\n";
    }
    catch(double) // catch a double
    {
        cout << "Caught double inside function \n";
        throw;
    }
    cout << "End of function\n";
}
//main begin
int main()
{
    cout << "Inside main\n";
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }
    catch(double)
    {
        cout << "Caught double inside main\n";
    }
    cout << "End of main \n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Inside main
Inside function
Division = 5.25
End of function
Inside function
Caught double inside function
Caught double inside main
End of main


Process returned 0 (0x0)   execution time : 1.359 s
Press any key to continue.


*/
