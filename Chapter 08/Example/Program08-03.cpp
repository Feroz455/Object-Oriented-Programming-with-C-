/*
Page 217
program 8.3
MULTILEVEL INHERITANCE

*/
#include<iostream>
#include<cstdio>
using namespace std;
class student
{
protected:
    int roll_number;
public:
    void get_number(int);
    void put_number(void);
};
void student :: get_number(int a)
{
    roll_number = a;
}
void student :: put_number(void)
{
    cout << "Roll Number : " << roll_number << "\n";
}
class test : public student // first level deriavation
{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float , float);
    void put_marks(void);
};
void test :: get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void test :: put_marks()
{
    cout << "Marks in sub1 = " << sub1 << "\n";
    cout << "Marks in sub2 = " << sub2 << "\n";
}
class result : public test // second level derivation
{
    float total;
public:
    void display(void);
};
void result :: display(void)
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total = " << total << "\n";
}
//main begin
int main()
{
    result student1; // student created
    student1.get_number(111);
    student1.get_marks(75.0, 59.5);

    student1.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Roll Number : 111
Marks in sub1 = 75
Marks in sub2 = 59.5
Total = 134.5


Process returned 0 (0x0)   execution time : 1.645 s
Press any key to continue.
*/
