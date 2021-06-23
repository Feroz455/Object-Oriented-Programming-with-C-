/*
Page 367
program 12-5
Function Template - An Example
*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template <class T>
void Swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

void fun(int m, int n , float a, float b)
{
    cout << "m and n before Swap : " << m  << " " << n << "\n";
    Swap(m,n);
    cout << "m and n after Swap : "  << m  << " " << n << "\n";

    cout << "a and b before Swap: " << a << " " << b << "\n";
    Swap(a,b);
    cout << "a and b after Swap: " << a << " " << b << "\n";
}
//main begin
int main()
{
    fun(100,200,11.22,33.44);
    getchar();
    return 0;
}
//main end
///Program end

/*
output

m and n before Swap : 100 200
m and n after Swap  : 200 100
a and b before Swap : 11.22 33.44
a and b after Swap  : 33.44 11.22


Process returned 0 (0x0)   execution time : 4.720 s
Press any key to continue.

*/
