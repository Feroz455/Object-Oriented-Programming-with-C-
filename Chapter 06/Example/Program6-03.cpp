/*
Page 154
program 6.3
Dynamic initialization of constructors

*/
///long_term  fixed deposit system
#include<iostream>
#include<cstdio>
using namespace std;
class Fixed_deposit
{
    long int P_amount; // Principal amount
    int Years ; // Period of investment
    float Rate; // Interest rate
    float R_value; // Return value of amount
public:
    Fixed_deposit(){};
    Fixed_deposit(long int p, int y, float r = 0.12);
    Fixed_deposit(long int p, int y , int r);
    void display(void);
};

Fixed_deposit :: Fixed_deposit(long int p, int y, float r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;

    for(int i = 1; i <= y; i++)
    {
        R_value = R_value * (1.0 + r);
    }
}

Fixed_deposit :: Fixed_deposit(long int p, int y, int r)
{
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i = 1; i <= y; i++)
        R_value = R_value*(1.0+float(r)/100);
}

void Fixed_deposit :: display(void)
{
    cout << "\n"
         << "Principal Amount = " << P_amount  << "\n"
         << "Return value     = " << R_value << "\n";
}
//main begin
int main()
{
    Fixed_deposit FD1, FD2, FD3; // Deposits created
    long int p; //principal amount
    int y; // investment period, year ;
    float r; // interest rate decimal from
    int R; // interest rate , percent from

    cout << "Enter amount, period , interest rate (in percent) " << "\n";
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p,y,R);

    cout << "Enter amount, period , interest rate (in decimal ) " << "\n";
    cin >> p >> y >> r;
    FD2  = Fixed_deposit(p,y,r);

    cout << "Enter amount and period " << "\n";
    cin >> p >> y;
    FD3 = Fixed_deposit(p,y);

    cout << "\nDeposit 1";
    FD1.display();

    cout << "\nDeposit 2";
    FD2.display();

    cout << "\nDeposit 3";
    FD3.display();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter amount, period , interest rate (in percent)
1000 3 18
Enter amount, period , interest rate (in decimal )
1000 3 0.18
Enter amount and period
1000 3

Deposit 1
Principal Amount = 1000
Return value     = 1643.03

Deposit 2
Principal Amount = 1000
Return value     = 1643.03

Deposit 3
Principal Amount = 1000
Return value     = 1404.93

Process returned 0 (0x0)   execution time : 27.216 s
Press any key to continue.
*/

