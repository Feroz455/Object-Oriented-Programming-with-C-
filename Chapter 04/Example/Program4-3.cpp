/*
page 88
Function overloading
*/
//Function volume() is overloaded three times

#include<iostream>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long, int , int);
//main begin
int main()
{
    cout << volume(10) << "\n";
    cout << volume(2.5,8) << "\n";
    cout << volume(100l, 75, 15) << "\n";
}
//function definitions

int volume(int s) // cube
{
    return(s*s*s);
}
double volume(double r, int h) // cylinder
{
    return(3.14519*r*r*h);
}
long volume(long l, int b, int h)
{
    return(l*b*h);
}
/*
output
1000
157.26
112500

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/

