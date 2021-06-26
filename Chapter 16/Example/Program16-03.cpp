/*
page 455
New Features of ANSI
program 16-3
Using Namespace Scope with Nesting
*/
#include<iostream>
#include<string>
using namespace std;
//defining a namespace
namespace Name1
{
    double x = 4.56;
    int m = 100;

    namespace Name2 // Nesting namespace
    {
        double y = 1.23;
    }
}
namespace //Unnamed namespace
{
    int m = 200;
}

//main begin
int main()
{
    cout << "x = " << Name1::x << "\n"; // x is qualified
    cout << "m = " << Name1::m << "\n";
    cout << "y = " << Name1::Name2::y << "\n"; // y is fully qualified
    cout << "m = " << m << "\n"; // m is global
    getchar();
    return 0;
}
//main end
///Program end

/*
output

x = 4.56
m = 100
y = 1.23
m = 200


Process returned 0 (0x0)   execution time : 1.453 s
Press any key to continue.
*/
