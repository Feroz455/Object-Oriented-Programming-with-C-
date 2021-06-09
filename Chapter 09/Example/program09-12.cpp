/*
Page 276
program 9.12
Virtual Function

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

class Base
{
public:
    void display()
    {
        cout << "\nDisplay base ";
    }
    virtual void show()
    {
        cout << "\nshow base : ";
    }
};
class Derived: public Base
{
public:
    void display()
    {
        cout << "\nDisplay derived";
    }

    void show()
    {
        cout << "\nshow derived";
    }
};

//main begin
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout << "\nbptr points to Base \n";

    bptr = &B;

    bptr->display(); // calls Base version
    bptr ->show();  // calls Base version

    cout << "\n\nbptr points to Derived \n";

    bptr = &D;
    bptr -> display(); //Calls Base version
    bptr->show(); // calls Derive version
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
