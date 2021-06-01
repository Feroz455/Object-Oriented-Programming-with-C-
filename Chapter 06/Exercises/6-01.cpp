/*
Page 169
program 6.01
Design Constructor for the class designed in Programming Exercises 5.1 through 5.5 chapter 5
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
/******************************************/
///Programming Exercises 5.1
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
        strcpy(name, "\0");
        Accountnumber = NULL;
        strcpy(AcType, "\0");
        Balance = 0;
        numberOfperson++;
    }
    Account(char *name,int Accountnumber,char *AcType, float Balance = 0)
    {
        strcpy(this->name,name);
       this->Accountnumber = Accountnumber;
        strcpy(this->AcType,AcType);
        this->Balance = Balance;
        numberOfperson++;
    }
    Account(char *name,int Accountnumber)
    {
        strcpy(this->name,name);
       this->Accountnumber = Accountnumber;
        strcpy(this->AcType,"Reagular");
        this->Balance = 0;
        numberOfperson++;
    }
      Account(char *name)
    {
        strcpy(this->name,name);
       this->Accountnumber = NULL;
        strcpy(this->AcType,"Reagular");
        this->Balance = 0;
        numberOfperson++;
    }
    Account(Account &a)
    {
        strcpy(this->name,a.name);
        this->Accountnumber = a.Accountnumber;
        strcpy(this->AcType,a.AcType);
        this->Balance = a.Balance;
        numberOfperson++;
    }
    void initialValue(void);
    void depositAmount(float amount);
    void Withdraw(float amount);
    void display(void);
};
/*******************************************/
//programming Exercises  5.2
class vector
{
    float value[50];
    char key[50][20];
public:

    static int count;
public:
      vector()
    {

    }
      vector(float v, char *key)
    {
        this->value[count] = v;
        strcpy(this->key[count],key);

    }
     vector(char *key,float v)
    {
        this->value[count] = v;
        strcpy(this->key[count],key);

    }
     vector(float v)
    {
        this->value[count] = v;
        strcpy(this->key[count],"Default"); ///it should be a bug .Multiple vector going to have key as Default
    }
     vector(char *key)
    {
        this->value[count] = 0;
        strcpy(this->key[count],key);

    }
    void createVector(void);
    void insetVector(void);
    void modifyVector(float number, char key[20]);
    void multiply(float number);
    void displayVector(void);
};
/*******************************************/
class DM;
/*********************************************/
class DB
{
    int feet;
    float inches;
public:
    DB()
    {
        feet = 0;
        inches = 0;
    }
    DB(int feet ,float inches)
    {
        this->feet = feet;
        if(inches>=12)
        this->inches -= inches;
        else
             this->inches = inches;
    }
     DB(int feet)
    {
        this->feet = feet;
        this->inches = 0;
    }
    DB(float inches)
    {
        this->feet = 0;
        this->inches = inches;
    }
    void setlen(void);
    void addlen(int feet = 0, float inches = 0);
    int getFeet(void)
    {
        return feet;
    };
    float getInches(void)
    {
        return inches;
    };
    friend void result(DM);
};
/********************************************/
/********************************************/
class DM
{
    int meter;
    float centimeter;
public:
     DM()
     {
         meter = 0;
         centimeter = 0;
     }

     DM(int meter, float centimeter)
     {
         this->meter = meter;
         this->centimeter = centimeter;
     }
     DM(int meter)
     {
         this->meter = meter;
         this->centimeter = 0;
     }
      DM(float centimeter)
     {
         this->meter = 0;
         this->centimeter = centimeter;
     }
    void setlen(void);
    void addlen(int meter = 0, float centimeter = 0);
    int getMeter(void)
    {
        return meter;
    };
    float getCentimeter(void)
    {
        return centimeter;
    };
    friend void result(DB);
};
/********************************************/
//main begin
int main()
{
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

