/*
page 400
Exception Handling
program 13-2
Write a program which uses catch(...); handler;
*/
#include<iostream>
using namespace std;

void test(int x)
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
    }
    catch(double i)
    {
        cout << "X is positive\n";
    }
    catch(...)
    {
        cout << "X is zero\n";
    }
}
//main begin
int main()
{
    test(1);
    test(-1);
    test(0);

    getchar();
    return 0;
}
//main end
///Program end

/*
output

X is positive
X is negative
X is zero


Process returned 0 (0x0)   execution time : 2.047 s
Press any key to continue.

*/
