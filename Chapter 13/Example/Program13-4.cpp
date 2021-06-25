/*
page  389
Exception Handling
program 13-4
Catching all Exception
*/
#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x == 1) throw x ; // int
        else
            if(x == 0) throw 'x'; // char
        else
            if(x == -1) throw 1.0; // float
    }
    catch(...)
    {
        cout << "Caught an Exception\n";
    }
}
//main begin
int main()
{
    cout << "Testing Generic Catch\n";
    test(-1);
    test(0);
    test(1);
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Testing Generic Catch
Caught an Exception
Caught an Exception
Caught an Exception


Process returned 0 (0x0)   execution time : 1.172 s
Press any key to continue.
*/
