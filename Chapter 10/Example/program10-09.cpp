/*
Page 316
program 10.9
User defined Manipulators
*/
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

//User define manipulators
ostream &currency(ostream &output)
{
    output << "Rs";
    return output;
}
ostream &from(ostream &output)
{
    output.setf(ios::showpoint);
    output.setf(ios::showpos);
    output.fill('*');

    output.precision(2);
    output<< setiosflags(ios::fixed)
    << setw(10);

    return output;
}
//main begin
int main()
{
    cout << currency << from << 7864.5;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Rs**+7864.50

Process returned 0 (0x0)   execution time : 1.508 s
Press any key to continue
*/

