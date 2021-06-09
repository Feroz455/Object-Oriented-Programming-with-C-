/*
Page
program

*/
#include<iostream>
#include<cstdio>
using namespace std;

typedef void (*FunPtr)(int,int);

void Add(int i, int j)
{
    cout << i << " + " << j << " = " << i+j << endl;
}
void Subtract(int i, int j)
{
    cout << i << " - " << j << " = " << i-j << endl;
}

//main begin
int main()
{
    FunPtr ptr[2];
    ptr[0] = &Add;
    ptr[1] = &Subtract;

    ptr[0](1,2);
    ptr[1](3,2);
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

