/*
page 84
Program 4.1 illustrates the use of inline function
*/
///Program begin
#include<iostream>
using namespace std;
inline float mul(float x, float y)
{
    return(x*y);
}
inline double div(double p, double q)
{
    return(p/q);
}
int main()
{
        float a = 12.345;
        float b = 9.82;

        cout << mul(a,b) << "\n";
        cout << div(a,b) << "\n";
    return 0;
}
//Main end
//Program end
/*
output
121.228
1.25713

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.

*/
