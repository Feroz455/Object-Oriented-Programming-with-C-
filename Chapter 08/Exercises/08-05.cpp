/*
Page 250
program 8.5
Consider a class network of fig 8.15 .The class master derives
information from both account and admin classes Which
in turn derive information from the class person.Define all four
class and write a program to create update and display
the information contained in master object

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class defination
class person
{
protected:
    char *name;
    int code;
    int length;
public:
    person()
    {
        length = 0;
        name  = new char[length+1];
    }
    person(char *name, int code)
    {
        length = strlen(name);
        this->name = new char[length + 1];
        strcpy(this->name, name);
        this-> code = code;
    }
    char *GetName()
    {
        return name;
    }
    int GetCode()
    {
        return code;
    }
    void displayPerson()
    {
        cout << "Name = " << name << endl;
        cout << "Code = " << code << endl;
    }
};
class Account:virtual public person
{
protected:

    float pay;
public:
    Account()
    {
        pay = 0.0;
    }
    Account(float p)
    {
        pay = p;
    }
    float GetPay()
    {
        return pay;
    }
    void displayPay()
    {
        cout << "Pay  = " << pay << endl;
    }
};
class Admin:virtual public person
{
protected:
    int experience;
public:
    Admin()
    {
        experience = 0;
    }
    Admin(int xp)
    {
        experience = xp;
    }
    int GetExperience()
    {
        return experience;
    }
    void displayAdmin()
    {
        cout << "Experience " << experience << endl;
    }

};
class Master: public Account , public Admin
{
public:
    Master(char *name, int code, float pay, int xp):
        person(name,code),Account(pay), Admin(xp)
        {

        }
        void displayMaster()
        {
             displayPerson();
             displayPay();
             displayAdmin();
        }
};

//main begin
int main()
{
    Master m("Firoz", 01, 80000, 1);
    m.displayMaster();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Name = Firoz
Code = 1
Pay  = 80000
Experience 1


Process returned 0 (0x0)   execution time : 3.234 s
Press any key to continue.

*/
