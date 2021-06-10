/*
Page 305
program 10.5
Precision setting with precision();

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

//class definition

//main begin
int main()
{
    cout << "Precision set to 3 digits \n\n";
    cout.precision(3);

    cout.width(10);

    cout << "VALUE";
    cout.width(15);

    cout << "SQRT_OF_VALUE" << "\n";

    for(int n = 1; n <= 5; n++)
    {
        cout.width(8);
        cout << n;
        cout.width(13);
        cout << sqrt(n) << "\n";
    }

    cout << "\nPrecision set to 5 digits \n\n";
    cout.precision(5); // Precisin parameter changed
    cout << "sqrt(10) = " << sqrt(10) << "\n\n";

    cout.precision(6); // precision set to default
    cout << "sqrt(10) = " << sqrt(10) ;
    cout << "\n(default setting)\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Precision set to 3 digits

     VALUE  SQRT_OF_VALUE
       1            1
       2         1.41
       3         1.73
       4            2
       5         2.24

Precision set to 5 digits

sqrt(10) = 3.1623

sqrt(10) = 3.16228
(default setting)



*/
