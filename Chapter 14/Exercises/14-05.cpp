/*
Page 426
program 14.5

Create a student class that includes a student's first name and his roll_number.Create five object of this class and store
them in a list thus creating a phone_list.Write a program using this list to display the student named if the roll_number
is given and vise_versa.

*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<list>
using namespace std;

//class definition
class student
{
private:
    char name[20];
    int roll;
public:
    student()
    {

    };
    student(char* name, int roll)
    {
        strcpy(this->name, name);
        this->roll = roll;
    }
    void setName(char * name)
    {
        strcpy(this->name , name);
    }
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    char *getName()
    {
        return name;
    }
    int Get_Roll()
    {
        return roll;
    }
    void show()
    {
        cout << "Name = " << name << endl;
        cout << "Roll = " << roll << endl;
    }
};
//main begin
int main()
{
    student *s1 = new student("Firoz", 90);
    student *s2 = new student("Oishee", 65);
    student *s3 = new student("Payel", 72);
    student *s4 = new student("Sumon", 64);
    student *s5 = new student("Shadin", 61);

    list<student> s;
    list<student>::iterator si;
    s.push_back(*s1);
    s.push_back(*s2);
    s.push_back(*s3);
    s.push_back(*s4);
    s.push_back(*s5);


    for(si = s.begin(); si != s.end(); si++)
    {
        si->show();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Name = Firoz
Roll = 90
Name = Oishee
Roll = 65
Name = Payel
Roll = 72
Name = Sumon
Roll = 64
Name = Shadin
Roll = 61


Process returned 0 (0x0)   execution time : 799.586 s
Press any key to continue.
*/

