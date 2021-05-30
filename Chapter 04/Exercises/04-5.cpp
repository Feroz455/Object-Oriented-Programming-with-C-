/*
Page 95
program 4.5
Write a macro that obtains the largest of three number;

*/
#include<iostream>
#include<cstdio>
using namespace std;

#define LARGEST(i, j, k)\
int a =  i > j && i > k ? i:j>k? j:k;\
cout << a;

//main begin
int main()
{
    //LARGEST(12,45,41);
    int i, j, k;
    i = 100;
    j = 45;
    k = 41;
    LARGEST(i, j, k);
    getchar();
    return 0;
}
//main end
///Program end

/*
output
100

Process returned 0 (0x0)   execution time : 1.531 s
Press any key to continue.
*/

