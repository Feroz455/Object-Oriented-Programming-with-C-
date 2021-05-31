/*
page 142
program 5.1
Define a class to represent a bank account.Including the following members
Data members
1. Name of the Depositor
2. Account number;
3. Type of account
4. Balance amount in the account

Member Functions
1. To assign initial value
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance

Write a main program to test the program
*/
#include<iostream>
using namespace std;
class Account
{
    static  int numberOfperson;
    char name[40];
    int Accountnumber;
    char AcType[10];
    float Balance;
public:
    Account()
    {
        numberOfperson++;
    }
    void initialValue(void);
    void depositAmount(float amount);
    void Withdraw(float amount);
    void display(void);
};
int   Account :: numberOfperson;
void  Account :: initialValue(void)
{
    cout << "Name of Customer\n";
    cin >> name;
    cout << "Account Number\n";
    cin >> Accountnumber;
    cout << "Type of account \n";
    cin >> AcType;
    Balance = 0;
}
void  Account :: depositAmount(float amount)
{
  this->Balance += amount;
};
void  Account :: Withdraw(float amount)
{
    this->Balance -= amount;
};
void  Account :: display(void)
{
    cout << "Name of Customer" << "   " << name <<endl;
    cout << "Account Number" << "   " <<  Accountnumber << endl;
    cout << "Type of account " << "   " << AcType << endl;
    cout << "Balance " << "=   " << Balance <<endl;
};

int main()
{
    Account Person;
    Person.initialValue();
    Person.depositAmount(50);
    Person.display();
    Person.Withdraw(20);
    Person.display();
    return 0;
}
/*
Name of Customer
Firoz
Account Number
12458763
Type of account
Bisness
Name of Customer   Firoz
Account Number   12458763
Type of account    Bisness
Balance =   50
Name of Customer   Firoz
Account Number   12458763
Type of account    Bisness
Balance =   30

Process returned 0 (0x0)   execution time : 15.771 s
Press any key to continue.
*/
