/*
page 400
Exception Handling
program 13-4
Write a program to demonstrate the concept of rethrowing an exception
*/
#include<iostream>
using namespace std;

void test(int x) throw(int, double)
{
    try
    {
        if(x < 0)
            throw -1;
        if(x == 0)
            throw '0';
        if(x > 0)
            throw 1.0;
    }

    catch(int i)
    {
        cout << "X is negative\n";
        throw;
    }
    catch(double i)
    {
        cout << "X is positive\n";
         throw;
    }
    catch(...)
    {
        cout << "X is zero\n";
         throw;
    }
}
//main begin
int main()
{
    cout << "When x is greater then 0\n";
    try
    {
        test(1);
    }
     catch(int i)
    {
        cout << "X is negative\n";
    }
    catch(double i)
    {
        cout << "X is positive\n";
    }
    catch(...)
    {
        cout << "X is zero\n";
    }

    cout << "When x is less then 0\n";

    try
    {
      test(-1);
    }
    catch(int i)
    {
        cout << "X is negative\n";
    }
    catch(double i)
    {
        cout << "X is positive\n";
    }
    catch(...)
    {
        cout << "X is zero\n";
    }
    cout << "When x is  0\n";

    try
    {
         test(0);
    }
   catch(int i)
    {
        cout << "X is negative\n";
    }
    catch(double i)
    {
        cout << "X is positive\n";
    }
    catch(...)
    {
        cout << "X is zero\n";
    }
    cout << "When x is  0\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

When x is greater then 0
X is positive
X is positive
When x is less then 0
X is negative
X is negative
When x is  0
X is zero
terminate called after throwing an instance of 'char'

Process returned 3 (0x3)   execution time : 0.516 s
Press any key to continue.

*/
