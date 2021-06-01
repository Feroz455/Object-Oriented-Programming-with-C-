/*
Page 148
program 6.1
class with constructor

*/
#include<iostream>
#include<cstdio>
using namespace std;

class integer
{
    int m;
    int n;
public:
    integer(int , int ); //Constructor declared
    void display(void)
    {
        cout << "m = " << m << "\n";
        cout << "n = " << n << "\n";
    }
};
integer::integer(int x, int y)
{
    m = x;
    n = y;
}

//main begin
int main()
{
    integer int1(0,100); // constructor called implicitly
    integer int2 = integer(25, 75); // constructor called explicitly

    cout << "\nOBJECT 1 " << "\n";
    int1.display();
    cout << "\nOBJECT 2 " << "\n";
    int2.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output


OBJECT 1
m = 0
n = 100

OBJECT 2
m = 25
n = 75


Process returned 0 (0x0)   execution time : 5.687 s
Press any key to continue.
*/

