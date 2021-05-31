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


5.2 Modify the class and the program of exercises 5.2 for handling 10 customers
*/
#include<iostream>
#include<iomanip>
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
    if(this->Balance < amount)

        cout << "Balance is low\n";
    else
    this->Balance -= amount;
};


void  Account :: display(void)
{
    cout << setw(20) << "Name of Customer"<< setw(20) << name <<endl;
    cout << setw(20) << "Account Number"<< setw(20) <<  Accountnumber << endl;
    cout << setw(20) << "Type of account"<< setw(20) << AcType << endl;
    cout << setw(20) << "Balance"<< setw(20) << Balance <<endl;
};


void displayManu(void)
{
    cout << "Enter your choice\n";
    cout << "01\t Create a record" << endl;
    cout << "02\t Deposit Amount" << endl;
    cout << "03\t Withdraw" << endl;
    cout << "04\t Display Spacific record " << endl;
    cout << "05\t Display All record " << endl;
    cout << "06\t QUIT" << endl;
}


void printNewLine(int i = 20)
{
    for(int j = 0; j < i; j++)
    {
        cout << "\n";
    }
}


void printDash(int i = 55)
{
    cout << "\n";
    for(int j = 0; j < i; j++)
    {
        cout << "-_";
    }
    cout << "\n";
}


void FromHere(void)
{
    int i;
    float amount;
    Account person[10];
    int count = 0;
    while(1)
    {
        displayManu();
        printDash();
        cin >> i;
        switch(i)
        {
        case 1:
            person[count++].initialValue();
            break;


        case 2:
            cout << "Enter serial number\n";
            cin >> i;
            if(i > count)
            {
                cout << "There is no such account\n";
                 break;
            }
            cout << "\nEnter Amount";
            cin >> amount;

            if(amount > 0)
            person[i].depositAmount(amount);
            else
                cout << "Enter wrong amount\n";
            break;



        case 3:
            cout << "Enter serial number\n";
            cin >> i;

            if(i > count)
            {
                cout << "There is no such account\n";
                break;
            }

            cout << "\nEnter Amount";
            cin >> amount;

            if(amount > 0)
            person[i].Withdraw(amount);
            else
                cout << "Enter wrong amount\n";

            break;



        case 4:
            cout << "Enter serial number\n";
            cin >> i;

            if(i > count)
            {
                cout << "There is no such account\n";
                 break;
            }

            person[i].display();

            break;
        case 5:
            if(count)

            for(int i = 0; i < count; i++)
            {
                 person[i].display();
            }

            break;



        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid input\n";
            cout << "Try again...\n";
            break;
        }
    }
}
int main()
{
    FromHere();
    return 0;
}
/*
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
Name of Customer
Firoz_mahmud
Account Number
123456789
Type of account
Regular
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
Name of Customer
Maliha_Rahman
Account Number
14782369
Type of account
Regular
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
Name of Customer
Shohid
Account Number
159357
Type of account
Bisness
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance                   0
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                   0
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance                   0
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
Enter serial number
0

Enter Amount15900
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                   0
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance                   0
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
Name of Customer
Lokman_khaja
Account Number
1236578
Type of account
Regular
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                   0
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance                   0
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance                   0
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
Enter serial number
3

Enter Amount 14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                   0
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance                   0
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
Enter serial number
2

Enter Amount 14700
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                   0
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance               14700
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
Enter serial number
1

Enter Amount 1000
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                1000
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance               14700
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
Enter serial number
2

Enter Amount 45695
Balance is low
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                1000
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance               14700
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
Enter serial number
3
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
    Name of Customer        Firoz_mahmud
      Account Number           123456789
     Type of account             Regular
             Balance               15900
    Name of Customer       Maliha_Rahman
      Account Number            14782369
     Type of account             Regular
             Balance                1000
    Name of Customer              Shohid
      Account Number              159357
     Type of account             Bisness
             Balance               14700
    Name of Customer        Lokman_khaja
      Account Number             1236578
     Type of account             Regular
             Balance               14500
Enter your choice
01       Create a record
02       Deposit Amount
03       Withdraw
04       Display Spacific record
05       Display All record
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6

Process returned 0 (0x0)   execution time : 184.814 s
Press any key to continue.
*/
