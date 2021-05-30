/*
Page 75
program 3.10
An electricity board charges the following rates to domestic users to discourage
large consumption of energy.
For the first 100 unit          : 60p per unit
For the next 200 unit           : 80p per unit
Beyond 300 units                : 90p per unit

All user are charged a minimum of rs 50.00.If the total amount is more than
Rs 300.00 than an additional surcharge of 15% is added.

Write a program to read the names of user and number of units consumed and
print out the charges with names

*/
#include<iostream>
#include<cstdio>
using namespace std;
float charge(int unit)
{
    float value;
    if(unit <= 100 && unit > 0)
    {
        value = 0.6*float(unit);
        if(value < 50)
            value = 50;

    }
   else  if(unit <= 300)
    {
        value = (0.8*float(unit-100)+ 60);

    }
    else
    {
        value = ((0.9*float(unit-300)) + 220);
        if(value > 300)
        {
             float ex = 0.15*value;
            value = value + ex;
        }

    }
return(value);
}
//main begin
int main()
{
    char name[30];
    int unit;
        cout << "Enter Customer name\n";
        cin >> name;

        cout << "Enter total charge\n";
        cin >> unit;

    float Charge  = charge(unit);
    cout << name << "\t" << Charge  << "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter Customer name
Firoz_mahmud
Enter total charge
7000
Firoz_mahmud    7187.5

Process returned 0 (0x0)   execution time : 9.354 s
Press any key to continue.
*/
