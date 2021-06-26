/*
page 467
New Features of ANSI
program 16-1
Write a program to demonstrate the use of reinterpret_cast operator.

*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
      int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    cout << *p << endl;
    cout << *ch << endl;
    cout << p << endl;
    cout << ch << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
65
A
0x1041770
A


Process returned 0 (0x0)   execution time : 1.090 s
Press any key to continue.

*/
