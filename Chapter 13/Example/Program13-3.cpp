/*
page 388
Exception Handling
program 13-3
Multiple Catch Statements
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
        cout << "End of try-block\n";
    }
    catch(char c) //Catch 1
    {
        cout << "Caught a character \n";
    }
    catch(int m)    //Catch 2
    {
        cout << "Caught a int\n";
    }
    catch(double d) //Catch 3
    {
        cout << "Caught  a double \n";
    }
    cout << "End of ty_catch system\n";
}
//main begin
int main()
{

    cout << "Testing Multiple Catches \n";
    cout << "x == 1\n";
    test(1);
    cout << "x == 0\n";
    test(0);
    cout << "x == -1\n";
    test(-1);

    cout << "x == 2\n";
    test(2);

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Testing Multiple Catches
x == 1
Caught a int
End of ty_catch system
x == 0
Caught a character
End of ty_catch system
x == -1
Caught  a double
End of ty_catch system
x == 2
End of try-block
End of ty_catch system


Process returned 0 (0x0)   execution time : 11.900 s
Press any key to continue.

*/
