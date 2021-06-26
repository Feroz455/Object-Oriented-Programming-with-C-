/*
page 467
New Features of ANSI
program 16.2
Define a namespace named Constants that contains declaration of some constant.Write a program that uses the constant
define in the namespace Constants

*/
#include<iostream>
#include<string>
using namespace std;
namespace Constant
{
    float PI = 3.1416;
    string name = "Firoz";
}
//main begin
int main()
{
    using namespace Constant;

    cout << PI << endl;
    cout << "Name = " << name << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
3.1416
Name = Firoz


Process returned 0 (0x0)   execution time : 1.031 s
Press any key to continue.

*/
