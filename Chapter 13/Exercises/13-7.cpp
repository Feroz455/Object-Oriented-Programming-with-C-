/*
page
Exception Handling
program 13-6
Write a main program that calls a deeply nested function containing an exception. Incorporate necessary exception;
*/
#include<iostream>
#include<string>
using namespace std;
void divid(int & i , int &j)
{
    try
    {
        if(j == 0)
            throw("Divide-by-zero");
        else
            cout << i / j;
    }
    catch(char const* c)
    {
        throw;
    }


}
void getData(int &i, int &j)
{
    cin >> i >> j;
    cout << i << "  " << j <<endl;
    divid(i, j);
    return;
}
//main begin
int main()
{
    int *i = new int;
    int *j = new int;

    try
    {
        getData(*i, *j);
    }
    catch(char const* c)
    {
        cout << c << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output


1
0
1  0
Divide-by-zero

Process returned 0 (0x0)   execution time : 2.472 s
Press any key to continue.

*/
