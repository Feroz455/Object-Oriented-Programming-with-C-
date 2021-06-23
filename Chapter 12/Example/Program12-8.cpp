/*
Page 372
program 12.8
Function with Two Generic Types

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template<class T1, class T2>
void display(T1 x, T2 y)
{
    cout << x << " " << y << "\n";
}
//main begin
int main()
{


        cout<<"Calling function template with int and character string type parameters...\n";
        display(1999, "EBG");
        cout<<"Calling function template with float and integer type parameters...\n";
        display(12.34, 1234);

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Calling function template with int and character string type parameters...
1999 EBG
Calling function template with float and integer type parameters...
12.34 1234


Process returned 0 (0x0)   execution time : 1.312 s
Press any key to continue.

*/
