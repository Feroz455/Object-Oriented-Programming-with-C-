/*
One of the major features of C++ is classes.They provide a method of binding
together data and function which on them.Like structure in C. Classes are user defined
data types.
*/
///Use of Class
#include<iostream>
using namespace std;

class person
{
    char name[30];
    int age;
public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void)
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
}
void person ::display(void)
{
    cout << "\nName : " << name;
    cout << "\nAge: " << age;
}
int main()
{
    person p;
    p.getdata();
    p.display();

    return 0;
}
/*
output
Enter name : Firoz
Enter age : 24

Name : Firoz
Age: 24
Process returned 0 (0x0)   execution time : 6.204 s
Press any key to continue.
*/
