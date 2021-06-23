/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.3
Write a function template to perform linear search in an array.
*/
#include<iostream>
#include<cstdio>
using namespace std;

//Function template to perform linear search in an array.
template<typename T>
int search(T *a, int i)
{
    T v;
    cout << "Enter search key = " ; cin >> v;
    while(i)
    {
        if(a[i] == v)
            return i;
        i--;
    }
    cout << "key not found \n";
    return 0;
}

//main begin
int main()
{
    int arra[10] = {14,15,23,26,24,1,2,3,6,5};
    float array[10] = {1.1,15.2,14.5,63.3,45.2,78.6,48.2,8.5,85.2,999.5};
    cout << " int search = "  <<  search(arra, 10);
    cout << " th position";
     cout << "\n\n float search = " <<  search(array, 10);
    cout << " th position";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
 int search = Enter search key = 2
6 th position

 float search = Enter search key = 8.5
7 th position
Process returned 0 (0x0)   execution time : 12.921 s
Press any key to continue.

*/

