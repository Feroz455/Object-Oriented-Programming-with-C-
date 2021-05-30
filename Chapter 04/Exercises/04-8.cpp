/*
Page 95
program 4.8
Write a function that performs the same operation as that of exercises 4.7
but takes an int value m,Both the functions should have same name.
Write a main that calls both the function.Use the concept of function
overloading.

*/
#include<iostream>
#include<cstdio>
using namespace std;
float power(float m, int n = 2);
int power(int m, int n = 2);
//main begin
int main()
{
    int i = 3;
    float j = 4.5;
    cout << power(j) << endl;
    cout << power(j,i) << endl;
     cout << power(i) << endl;
    getchar();
    return 0;
}
float power(float m, int n)
{
    if(n == 0)
    {
        return(1);
    }
    return(m*power(m,n-1));
}

int power(int m, int n)
{
    if(n == 0)
    {
        return(1);
    }
    return(m*power(m,n-1));
}
//main end
///Program end

/*
output
20.25
91.125
9


Process returned 0 (0x0)   execution time : 1.437 s
Press any key to continue.


*/
