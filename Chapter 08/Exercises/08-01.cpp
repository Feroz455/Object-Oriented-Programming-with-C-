/*
Page 248
program  8.1

Assume that a bank maintains two kinds of accounts for customers,one called as
savings account and the other as current account.The savings account provides
compound interest and withdrawal facilities but no cheque book facility but no interest
Current account holders should also maintain a minimum balance and if the balance falls
below this level, a service change is imposed.

Create a class account that stores customer name, account number and type of
account.From this derive the classes cur_acct and sav_acct to make them more
scpecific to their requirements.Include necessary member functions in order to
achieve the following task:

a) Accept deposit from a customer and update the balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdrawal and update the balance.
e) Check for the minimum balance, impose penalty, necessary and update the balance

Do not use any constructors.Use member functions to initialize the class member.

*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstring>
using namespace std;
//class definition
class Account
{
    char *name;
    char *accountNumber;
    char *typeOfAccount;
public:
    Account()
    {
        name = new char[1];
        accountNumber = new char[1];
        typeOfAccount = new char[1];
    }

    void setName(char *s)
    {
        int len = strlen(s);
        name = new char[len+1];
        strcpy(name,s);
    }
    char *getName()
    {
        return name;
    }
    void setAccountNumber(char *a)
    {
        int len = strlen(a);
        accountNumber = new char[len+1];
        strcpy(accountNumber,a);
    }
    char *getAccountNumber()
    {
        return accountNumber;
    }
    void setTypeOfAccount(char *t)
    {
        int len = strlen(t);
        typeOfAccount = new char[len+1];
        strcpy(typeOfAccount,t);
    }
    char *getTypeOfAccount()
    {
        return typeOfAccount;
    }
    void showDetails()
    {
        cout << "Name           -> " << name << endl;
        cout << "Account number -> " << accountNumber << endl;
        cout << "Account type   -> " << typeOfAccount << endl;
    }

};
/*
a) Accept deposit from a customer and update the balance.
b) Display the balance.
c) Compute and deposit interest.
d) Permit withdrawal and update the balance.
e) Check for the minimum balance, impose penalty, necessary and update the balance
*/
class cur_acct: public Account
{
    float balance;
    float interest;
    void updateBalance(float balance)
    {
        this->balance += (balance);
    }
public:
    cur_acct()
    {
        balance = 0.0;
    }
    void setBalance(float balance)
    {
        this->balance = balance;
    }
    float getBalance()
    {
        return balance;
    }

    void Diposit(float balance)
    {
        updateBalance(balance);
    }
    void withdrawal(float balance)
    {
        if(this->balance < 0)
            cout << "Balance is low\n";
        else
        updateBalance(-balance);
    }
    void showDetails()
    {
        Account::showDetails();
        cout << "Balance          -> " << balance << endl;
        if(balance < 50)
        {
            cout << "Sir you have to pay service charge 50 tata\n";
        }
    }
    void CheckInterest()
    {
        interest = .35 * balance;
        cout << "After a month you will get " <<  interest << "taka\n" ;
    }

};
class say_acct :public Account
{
    float balance;
    void updateBalance(float balance)
    {
        this->balance += (balance);
    }
public:
    say_acct()
    {
        balance = 0.0;
    }
    void setBalance(float balance)
    {
        this->balance = balance;
    }
    float getBalance()
    {
        return balance;
    }

    void Diposit(float balance)
    {
        updateBalance(balance);
    }
    void withdrawal(float balance)
    {
       if(this->balance < 0)
            cout << "Balance is low\n";
        else
        updateBalance(-balance);
    }
    void showDetails()
    {
        Account::showDetails();
        cout << "Balance          -> " << balance << endl;
        if(balance < 50)
        {
            cout << "Sir you have to pay service charge 50 tata\n";
        }
    }
};
void printLine(int i = 50)
{
    cout << "\n";
    for( ; i > 0 ; i--)
        cout << "_-";
    cout << "\n";
}
void printNewlin(int i = 20)
{
    for( ;i > 0;i--)
        cout << "\n";
}
void displayManuMessageForSavings()
{
    cout << "01\t" << "Create a Account" << endl;
    cout << "02\t" << "Check balance" << endl;
    cout << "03\t" << "Deposit" << endl;
    cout << "04\t" << "Withdrawal" << endl;
    cout << "05\t" << "Show Details" << endl;
    cout << "06\t" << "SHOW ALL ACCOUTN" << endl;
    cout << "07\t" << "End" << endl;
}
void displayManuMessageForCurrent()
{
    cout << "01\t" << "Create a Account" << endl;
    cout << "02\t" << "Check balance" << endl;
    cout << "03\t" << "Deposit" << endl;
    cout << "04\t" << "Withdrawal" << endl;
    cout << "05\t" << "Interest chack" << endl;
    cout << "06\t" << "Show Details" << endl;
    cout << "07\t" << "SHOW ALL ACCOUTN" << endl;
    cout << "08\t" << "End" << endl;
}
void startSavingsAccount(void)
{
    int i;
    char ck;
    bool k = true;
    char temp[40];
    float balance;
    say_acct person[20];
    int count = 0;
    printNewlin();
    while(1)
    {
        printLine();
        displayManuMessageForSavings();
        cout << "Enter your choice\t";
        cin >> ck;
        switch(ck)
        {
        case '1':
            cout << "Valid Input " << "Create a Account" << endl;
            cout << "ENTER\n";
            cout << "Full Name           :- ";
            cin >> temp;
            person[count].setName(temp);

            cout << "Give Account number :- ";
            cin >> temp;
            person[count].setAccountNumber(temp);

            person[count].setTypeOfAccount("savings");
            count++;
            break;
        case '2':
            if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Check balance" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << person[i].getBalance() << endl;
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '3':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input "  << "Deposit" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << "Enter amount \t";
                    cin >> balance;
                   person[i].Diposit(balance);
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '4':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Withdrawal" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << "Enter amount \t";
                    cin >> balance;
                    person[i].withdrawal(balance);
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '5':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Show Details" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    person[i].showDetails();
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '6':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "SHOW ALL ACCOUTN" << endl;
            for(i = 0; i < count ; i++)
            {
                person[i].say_acct::showDetails();
            }
            break;
        case '7':
            cout << "Valid Input " << "Program terminate!!" << endl;
            return ;
            break;
        default:
            cout << "INVALID INPUT\nTRY AGAIN\n";
        }
    }
}
void StarCurrentAccount()
{

    int i,j,k;
    char ck;
    char temp[40];
    float balance;
    cur_acct person[20];
    int count = 0;
    printNewlin();
    while(1)
    {
        printLine();
        displayManuMessageForCurrent();
        cout << "Enter your choice\t";
        cin >> ck;
        switch(ck)
        {
        case '1':
            cout << "Valid Input " << "Create a Account" << endl;
            cout << "ENTER\n";
            cout << "Full Name           :- ";
            cin >> temp;
            person[count].setName(temp);

            cout << "Give Account number :- ";
            cin >> temp;
            person[count].setAccountNumber(temp);

            person[count].setTypeOfAccount("savings");
            count++;
            break;
        case '2':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Check balance" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << person[i].getBalance() << endl;
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '3':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input "  << "Deposit" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << "Enter amount \t";
                    cin >> balance;
                   person[i].Diposit(balance);
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '4':
            if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Withdrawal" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    cout << "Enter amount \t";
                    cin >> balance;
                    person[i].withdrawal(balance);
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '5':
            if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Interest chack" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    person[i].CheckInterest();
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '6':
             if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "Show Details" << endl;
            cout << "Enter account number\n";
            cin >> temp;
            for(i = 0; i < count ; i++)
            {
                if(strcmp(person[i].getAccountNumber(),temp) == 0)
                {
                    person[i].cur_acct::showDetails();
                    k = false;
                    break;
                }
            }
            if(k)
            {
                cout << "Account not found\n";
            }
            k = true;
            break;
        case '7':
           if(count == 0)
            {
                cout << "Account list is Empty\n";
                break;
            }
            cout << "Valid Input " << "SHOW ALL ACCOUTN" << endl;
            for(i = 0; i < count ; i++)
            {
                person[i].showDetails();
            }
            break;
        case '8':
             cout << "Valid Input " << "Program Terminate";
            return;
        default:
            cout << "INVALD INPUT\nTRY AGAIN\n";
        }
    }
}
//main begin

int main()
{
    char a;
    printNewlin();
    printLine();

    while(1)
    {
    cout << "\nEnter your choice !! \nType '*' to end \n";
    cout << "Savings ? Enter 's'\n";
    cout << "Current ? Enter 'c'\n";
    cin >> a;
    if(a == 's' || a == 'S')
        startSavingsAccount();
    else if(a == 'c' || a == 'C')
        StarCurrentAccount();
    else if(a == '*')
        break;
        else
        {
        cout << "Wrong Input\n" << "try Again\n";
        }
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

Enter your choice !!
Type '*' to end
Savings ? Enter 's'
Current ? Enter 'c'
1
Wrong Input
try Again

Enter your choice !!
Type '*' to end
Savings ? Enter 's'
Current ? Enter 'c'
ss





















_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice
1
Valid Input Create a Account
ENTER
Full Name           :- Firoz_Mahmud
Give Account number :- 1

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       1
Valid Input Create a Account
ENTER
Full Name           :- Shadin_Mahmud
Give Account number :- 2222

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       1
Valid Input Create a Account
ENTER
Full Name           :- Sumon
Give Account number :- 3333

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       Payel
INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       INVALID INPUT
TRY AGAIN

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       1
Valid Input Create a Account
ENTER
Full Name           :- Payel
Give Account number :- 5222

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       6
Valid Input SHOW ALL ACCOUTN
Name           -> Firoz_Mahmud
Account number -> 1
Account type   -> savings
Balance          -> 0
Sir you have to pay service charge 50 tata
Name           -> Shadin_Mahmud
Account number -> 2222
Account type   -> savings
Balance          -> 0
Sir you have to pay service charge 50 tata
Name           -> Sumon
Account number -> 3333
Account type   -> savings
Balance          -> 0
Sir you have to pay service charge 50 tata
Name           -> Payel
Account number -> 5222
Account type   -> savings
Balance          -> 0
Sir you have to pay service charge 50 tata

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       3
Valid Input Deposit
Enter account number
1
Enter amount    90000

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice       3
Valid Input Deposit
Enter account number
222
Account not found

_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
01      Create a Account
02      Check balance
03      Deposit
04      Withdrawal
05      Show Details
06      SHOW ALL ACCOUTN
07      End
Enter your choice
7
Valid Input Program terminate!!

Enter your choice !!
Type '*' to end
Savings ? Enter 's'
Current ? Enter 'c'
*/

