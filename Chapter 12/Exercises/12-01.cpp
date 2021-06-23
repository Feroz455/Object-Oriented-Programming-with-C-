/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.1
Write a function template for finding the minimum value contained in an array.

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template<class T>
T Min(T a[], int n)
{
    int i;
    T min = a[0];
    for(i = 0;  i < n; i++)
    {
        if(min > a[i])
            min = a[i];
    }
    return min;

}
//main begin
int main()
{
    int a[] = {50,45,78,95,12,1,56,45};
    int imin = Min(a, 9);
    float b[] = {45.5,15.2,12.4,95.4,36.2,78.4};
    float fmin = Min(b, 6);
    cout << "int min = " << imin << endl;
    cout << "float min = " << fmin << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
int min = 1
float min = 12.4


Process returned 0 (0x0)   execution time : 2.141 s
Press any key to continue.

*/

