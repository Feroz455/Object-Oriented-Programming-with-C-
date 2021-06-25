/*
page 400
Exception Handling
program 13-4
Write a program that demonstrates how certain exception types are not allowed to be
thrown;

*/
#include<iostream>
using namespace std;

void test(int x) throw(int, double)
{
        if(x < 0)
            throw -1;
        if(x == 0)
            throw '0';
        if(x > 0)
            throw 1.0;
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
When x is less then 0
X is negative
When x is  0
terminate called after throwing an instance of 'char'

Process returned 3 (0x3)   execution time : 0.703 s
Press any key to continue.
*/
