/*
Page 231
program  8.6
VIRTUAL BASE CLASS
*/
#include<iostream>
#include<cstdio>
using namespace std;

//class defination

class  student
{
protected:
    int roll_number;
public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll No: " << roll_number << "\n";
    }
};

class test: virtual public student
{
protected:
    float part1, part2;
public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }

    void put_marks(void)
    {
        cout << "Marks obtained: " << "\n"
             << "part1 = " << part1 << "\n"
             << "part2 = " << part2 << "\n";
    }
};
class sports : public virtual student
{
protected:
    float score;
public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports wt: " << score << "\n\n";
    }
};
class result : public test, public sports
{
    float total;
public:
    void display(void);
};
void result :: display(void)
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout << "Total score: " << total <<"\n";
}

//main begin
int main()
{
    result student_1;
    student_1.get_number(678);
    student_1.get_marks(30.5,25.5);
    student_1.get_score(7.0);
    student_1.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Roll No: 678
Marks obtained:
part1 = 30.5
part2 = 25.5
Sports wt: 7

Total score: 63


Process returned 0 (0x0)   execution time : 1.953 s
Press any key to continue.



*/
