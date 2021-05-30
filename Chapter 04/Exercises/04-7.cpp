/*
Page 95
program 4.7
Write a function power to raise a number m to a power n.
The function takes a double value for m and int value for n
and returns the result correctly.Use a default value of 2 for
n to make the function to calculates squares when this argument
is omitted.Write a main that gets the values of m and n from
the user to test the function
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
float power(float m, int n = 2);
//main begin
int main()
{
    int i = 3;
    float j = 4.5;
    cout << power(j) << endl;
    cout << power(j,i) << endl;
    getchar();
    return 0;
}
//main end

float power(float m, int n)
{
    if(n == 0)
    {
        return(1);
    }
    return(m*power(m,n-1));
}
///Program end

/*
output
20.25
91.125


Process returned 0 (0x0)   execution time : 3.405 s
Press any key to continue.

*/
