/*
Page 151
program 6.2
Overloaded Constructors
*/
#include<iostream>
#include<cstdio>
using namespace std;
class complex
{
    float x, y;
public:
    complex(){}             // Constructor no arg
    complex(float a)        // constructor
    {
        x = y = a;
    }
    complex(float real, float imag) // constructor two args
    {
        x = real;
        y = imag;
    }

    friend complex sum (complex, complex);
    friend void show(complex);
};

complex sum(complex c1, complex c2) // friend
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return(c3);
}
void show(complex c) // friend
{
    cout << c.x << " + j" << c.y << "\n";
}
//main begin
int main()
{
    complex A(2.7, 3.5); // define & initialize
    complex B(1.6); // define & initialize

    complex C;

    C = sum(A,B); //Sum is a friend
    cout << "A = " ;
    show (A);
    cout << "B =" ;
    show(B);

    cout << "C =" ;
    show(C);
    //Another way to give initial values (second method)

    complex P,Q,R; //define P, Q, and R

    P = complex(2.5, 3.9);
    Q = complex(1.6, 2.5);
    R = sum(P,Q);


    cout << "\n";
    cout << "P  = "; show(P);
    cout << "Q  = "; show(Q);
    cout << "R  = "; show(R);

    getchar();
    return 0;
}
//main end
///Program end

/*
output
A = 2.7 + j3.5
B =1.6 + j1.6
C =4.3 + j5.1

P  = 2.5 + j3.9
Q  = 1.6 + j2.5
R  = 4.1 + j6.4



Process returned 0 (0x0)   execution time : 2.031 s
Press any key to continue.

*/
