/*
Page 314
program 10.8
Formatting With Manipulators
*/
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

//class definition

//main begin
int main()
{
    cout.setf(ios::showpoint);
    cout << setw(5) << "\n"
        << setw(15) << "Inverse_of_n"
        << setw(15) << "Sum_of_terms\n\n";

        double term, sum = 0;

        for(int n = 1; n <= 10; n++)
        {
            term = 1.0/float(n);
            sum = sum + term;
            cout << setw(5) << n
            << setw(14) << setprecision(4)
            << setiosflags(ios::scientific) << term
            <<setw(13) << resetiosflags(ios::scientific)
            << endl;
        }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

   Inverse_of_n Sum_of_terms

    1    1.0000e+00
    2    5.0000e-01
    3    3.3333e-01
    4    2.5000e-01
    5    2.0000e-01
    6    1.6667e-01
    7    1.4286e-01
    8    1.2500e-01
    9    1.1111e-01
   10    1.0000e-01


Process returned 0 (0x0)   execution time : 1.618 s
Press any key to continue.

*/

