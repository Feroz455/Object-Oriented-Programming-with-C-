/*
page 457
New Features of ANSI
program 16-5
*/
#include<iostream>
#include<string>
using namespace std;
namespace Function
{
    int divide(int x, int y) //Definition
    {
        return(x/y);
    }
    int prod(int x, int y); // declaration only
}
int Function::prod(int x, int y) // qualified
{
    return(x*y);
}
//main begin
int main()
{
    using namespace Function;

    cout << "Division " << divide(20,10) << "\n";
    cout << "Multiplication : " << prod(20,10)  << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Division 2
Multiplication : 200


Process returned 0 (0x0)   execution time : 1.187 s
Press any key to continue.
*/
