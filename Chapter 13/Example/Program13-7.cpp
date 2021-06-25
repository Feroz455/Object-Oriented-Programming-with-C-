/*
page 393
Exception Handling
program 13.7
Testing Throw Restrictions
*/
#include<iostream>
using namespace std;
void test(int x) throw(int, double)
{
    if(x == 0)
        throw 'x'; //char
    else
        if(x == 1)
        throw x; // int
    else
        if(x == -1)
        throw 1.0; // double
    cout << "End of function block\n";
}
//main begin
int main()
{
    try
    {
        cout << "Testing Throw Restriction\n";
        cout << "x == 0\n";
        test(0);
        cout << "x == 1\n";
        test(1);
        cout << "x == -1";
        test(-1);
        cout << "x == 2\n";
        test(2);
    }
    catch(char c)
    {
        cout << "Caught a character \n";
    }
    catch(char m)
    {
        cout << "Caught a integer \n";
    }
    catch(double d)
    {
        cout << "Caught a double \n";
    }
    cout << "End of try_catch system\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Testing Throw Restriction
x == 0
terminate called after throwing an instance of 'char'

Process returned 3 (0x3)   execution time : 2.496 s
Press any key to continue.
*/
