/*
Page 176
program 7.2
OVERLOADING + OPERATOR

*/
#include<iostream>
#include<cstdio>
using namespace std;
class complex
{
    float x; // real part
    float y; // imaginary part
public:
    complex(){}; // constructor 1
    complex(float real, float imag)  //constructor
    {
        x = real;
        y = imag;
    }
    complex operator+(complex);
    void display(void);
};
complex complex :: operator+(complex c)
{
    complex temp; // temporary
    temp.x = x + c.x; // these are
    temp.y = y + c.y; // float addition
    return(temp);
}
void complex :: display(void)
{
    cout << x << " + j" << y << "\n";
}
//main begin
int main()
{
    complex C1, C2,C3; // invokes constructor 1
    C1 = complex(2.5, 3.5); // invokes constructor 2
    C2 = complex(1.6, 2.7);
    //C3 = C1 + C2;
   // C3 = C1.operator+(C2); // look closely actually we are not adding each other.
   // we are calling "operator-" through C1 object of class complex.
   // C3 = C1 + C2;
    C3 = C1.operator+(C2);
    cout << "C1  = "; C1.display();
    cout << "C2  = "; C2.display();
    cout << "C2  = "; C2.display();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
C1  = 2.5 + j3.5
C2  = 1.6 + j2.7
C2  = 1.6 + j2.7


C1  = 2.5 + j3.5
C2  = 1.6 + j2.7
C2  = 1.6 + j2.7
*/
