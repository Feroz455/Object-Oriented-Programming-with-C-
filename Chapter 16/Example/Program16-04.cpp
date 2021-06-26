/*
page 456
New Features of ANSI
program 16-4
Illustrating the using keyword

*/
#include<iostream>
#include<string>
using namespace std;
namespace Name1
{
    double x = 4.56;
    int m = 100;
    namespace Name2
    {
        double y = 1.23; // nesting namespace
    }
}
namespace Name3
{
    int m = 200;
    int n = 300;
}
//main begin
int main()
{
    using namespace Name1; // bring member of Name1 to current scope

    cout << "x = " << x << "\n";  // x is not qualified
    cout << "m = " << m  << "\n";
    cout << "y = " << Name2::y << "\n"; // y is qualified

    using Name3::n; // Bring n to current scope
    cout << "m = " << Name3::m << "\n"; // m is qualified
    cout << "n = " << n  << "\n"; // n is not qualified
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
n = 300


Process returned 0 (0x0)   execution time : 20.115 s
Press any key to continue.

*/
