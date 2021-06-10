/*
Page 60
program 2.4
//WITE this program from new edition .....

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
int fact(int i)
{
    if(i == 0)
    {
        return 1;
    }
    return (i*fact(i-1));
}
//main begin
int main()
{
    float e = 1.0;
    float i = 1;
    int n;
    cout.precision(5);
    cout.setf(ios::fixed, ios::floatfield);
    for(n = 1; n <=7; n++)
    {

        cout << 1/ float(fact(n)) << "  + ";
        e += 1/ float(fact(n));
    }

    cout << 1 / float(fact(n));

    cout << " = " << e  << "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
1.00000  + 0.50000  + 0.16667  + 0.04167  + 0.00833  + 0.00139  + 0.00020  + 0.00002 = 2.71825


Process returned 0 (0x0)   execution time : 3.035 s
Press any key to continue.
*/

