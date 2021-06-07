/*
Page 208
program 08-02
Single inheritance PRIVATE

*/
#include<iostream>
#include<cstdio>
using namespace std;

class B
{
    int a; // private; not inheritable
public:
    int b; // public ready for inheritance
    void get_ab();
    int get_a();
    void show_a();
};
class D: private B // private derivation
{
    int c;
public:
    void mul(void);
    void display(void);
};
void B :: get_ab(void)
{
    cout << "Enter value for a and b\n";
    cin >> a >> b;
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
    get_ab();
    c = b * get_a(); // a cannot be used directly
}
void D :: display()
{
    show_a();
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
}

//main begin
int main()
{
    D d;
    // d.get_ab(); WON'T WORK
    d.mul();
    //d.show_a(); WON'T WORK
    d.display();
    //d.b = 20; WONT'T WORK, b has become private
    d.mul();
    d.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter value for a and b
5 10
a = 5
b = 10
c = 50
Enter value for a and b
12
20
a = 12
b = 20
c = 240

Process returned 0 (0x0)   execution time : 15.753 s
Press any key to continue.

*/
