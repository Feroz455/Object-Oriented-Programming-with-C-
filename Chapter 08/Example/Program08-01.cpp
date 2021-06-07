/*
Page 204
program 8.1
Single inheritance PUBLIC
*/
#include<iostream>
#include<cstdio>
using namespace std;
class B
{
    int a;  //private: not inheritable
public:
    int b;  // public; ready for inheritable;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
class D : public B
{
    int c;
public:
    void mul(void);
    void display(void);
};
/***********************************************/
void B :: get_ab(void)
{
    a = 5;
    b = 10;
}

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    cout << "a = " << a << "\n";
}
void D :: mul()
{
    c = b * get_a();
}
void D :: display()
{
    cout << "a = " << get_a() << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n\n";
}
//---------------------------------------------

//main begin
int main()
{
    D d;
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 20;
    d.mul();
    d.display();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
a = 5
a = 5
b = 10
c = 50

a = 5
b = 20
c = 100



Process returned 0 (0x0)   execution time : 2.172 s
Press any key to continue.

*/
