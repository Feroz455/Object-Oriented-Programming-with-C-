/*
page 133
Program 5.12
Dereferencing Operators
*/
#include<iostream>
using namespace std;

class M
{
    int x;
    int y;
public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int sum (M m);
};
int sum(M m)
{
    int M::* px = &M::x;//*px is integer pointer of class M,
    int M::* py = &M::y;//*py integer pointer of class M
    M *pm = &m; // *pm is M pointer
    //int S = m.*px+pm->*py; //original line of a code , below is modified code by myself
    int S = pm->*px+pm->*py; // *px is pointing to x and *py pointing to y
    return S;
}

int main()
{
    M n;
    //*pf is a function pointer  of class M// Which contain address of function set_xy.
    void(M::*pf)(int, int) = &M::set_xy;
    //using function pointer to call the function ,
    //function pointer and object should be same object of same class
    (n.*pf)(10,20);
    cout << "SUM = " << sum(n) << "\n";
    // *op is pointer of class M, and pointing to n Which is object of class M
    M *op = &n;
    //op-> call the function pointer of class M, through arrow
    (op->*pf)(30,40);
    cout << "SUM = " << sum(n) << "\n";

    return 0;
}
/*

output
SUM = 30
SUM = 70

Process returned 0 (0x0)   execution time : 0.187 s
Press any key to continue.
*/

