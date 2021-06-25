/*
Page 427
program 14.06
Redo the Exercise 14.7 using a set.
*/
#include<iostream>
#include<cstdio>
#include<set>
#include<cstring>
using namespace std;

//class definition
class student
{
public:
    string name;
    int roll;
    student(string name, int roll)
    {
        this->name =  name;
        this->roll = roll;
    }

    bool operator<(const student &s) const
    {

        return (this->name < s.name);
    }
    friend void operator<<(ostream &os, const student object)
    {
        os << "Name = " << object.name << endl;
        os << "Roll = " << object.roll << endl;
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

    set<student> s;
    set<student>::iterator si;
    s.insert(*s1);
    s.insert(*s2);
    s.insert(*s3);
    s.insert(*s4);
    s.insert(*s5);


    for(si = s.begin(); si != s.end(); si++)
    {
       cout <<  *si;
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
Name = Shadin
Roll = 61
Name = Sumon
Roll = 64


Process returned 0 (0x0)   execution time : 4.880 s
Press any key to continue.

*/

