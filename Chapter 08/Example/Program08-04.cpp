/*
Page  221
program  08-04
MULTIPLE INHERITANCE
*/
#include<iostream>
#include<cstdio>
using namespace std;

class M
{
protected:
    int  m;
public:
    void get_m(int);
};
class N
{
protected:
    int n;
public:
    void get_n(int);
};
class p: public M, public N
{
public:
    void display(void);
};
void M::get_m(int x)
{
    m = x;
}
void N::get_n(int y)
{
    n = y;
}
void p::display(void)
{

    cout << "m  = " << m << "\n";
    cout << "n  = " << n << "\n";
    cout << "m*n  = " << m*n << "\n";
}

//class defination

//main begin
int main()
{
    p p1;
    p1.get_m(10);
    p1.get_n(20);
    p1.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
m  = 10
n  = 20
m*n  = 200


Process returned 0 (0x0)   execution time : 1.641 s
Press any key to continue.
*/
