/*
page 128
program 5.9
A function friend to two class
*/
#include<iostream>
using namespace std;
class ABC; // forward declaration
/************************************************/
class XYZ
{
    int x;
public:
    void setvalue(int i)
    {
        x = i;
    }
    friend void max(XYZ, ABC);
};
class ABC
{
    int a;
public:
    void setvalue(int i)
    {
        a = i;
    }
    friend void max(XYZ, ABC);
};
/**************************************/
void max(XYZ m, ABC n) // Definition of friend
{
    if(m.x >= n.a)
    {
        cout << m.x;
    }
    else
        cout << n.a;
}

int main()
{

    ABC abc;
    abc.setvalue(10);
    XYZ xyz;
    xyz.setvalue(20);
    max(xyz, abc);

    return 0;
}
//main end
//Program end
/*
Output
20
Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
