/*
page 131
Program 5.11
Returning object
*/
#include<iostream>
using namespace std;

class complex   // x + iy from
{
    float x;   // real part
    float y;   //imaginary part
public:
    void input(float real, float imag)
    {
        x = real;
        y = imag;
    }
    friend complex sum(complex, complex);
    void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3; // objects c3 is created
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3); // return object c3;
}
void complex :: show(complex c)
{
    cout << c.x << "+ j" << c.y << "\n";
}
int main()
{
    complex A,B,C;
    A.input(3.1, 5.65);
    B.input(2.75, 1.2);

    C = sum(A,B); // C = A + B
    cout << "A = ";
    A.show(A);
    cout << "B = ";
    B.show(B);
    cout << "C = ";
    C.show(C);

    return 0;
}
/*
Output
A = 3.1+ j5.65
B = 2.75+ j1.2
C = 5.85+ j6.85

Process returned 0 (0x0)   execution time : 0.094 s
Press any key to continue.
*/
