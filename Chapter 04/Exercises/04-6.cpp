/*
Page 95
program 4.6
Redo Exercise 4.5 using inline function.Test the function using
a main program

*/
#include<iostream>
#include<cstdio>
using namespace std;
inline void LARGEST(int i,int j,int k);
//main begin
int main()
{
    LARGEST(110,12,14);
    getchar();
    return 0;
}
//main end
///Program end
void LARGEST(int i, int j, int k)
{
    int a =  i > j && i > k ? i:j>k? j:k;
    cout << a;
}
/*
output
110

Process returned 0 (0x0)   execution time : 1.375 s
Press any key to continue.

*/

