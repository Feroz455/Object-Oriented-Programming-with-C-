/*
SCOPE RESULATION OPERATOR
*/
#include<iostream>
using namespace std;
int m = 10; // Global m
int main()
{
    int m = 20; //m redeclares local to main
        {
        int k = m;
        int m = 30; // m declared again local to inner block

        cout << "we are in inner block\n";
        cout << "k = " << k << "\n";
        cout << "m = " << m << "\n";
        cout << "::m = " << ::m << "\n";
        }
    cout << "\nWe are in outer block\n";
    cout << "m = " << m << "\n";
    cout << "::m = " << ::m << "\n";

    return 0;
}
/*
we are in inner block
k = 20
m = 30
::m = 10

We are in outer block
m = 20
::m = 10

Process returned 0 (0x0)   execution time : 0.125 s
Press any key to continue.
*/
