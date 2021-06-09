/*
Page 273
program 9.11
Pointers to derived objects
*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << "\n";
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b =  " << b << "\n"
            << "d = " << d << "\n";
    }
};
//main begin
int main()
{
    BC *bptr; // base pointer
    BC base;  // base object
    bptr = &base; // base address
    bptr->b = 100;  // access BC via base pointer

    cout << "bptr points to base object\n";

    bptr->show();

    //derived class
    DC derived;
    bptr = &derived; // address of derive object

    bptr->b = 200; // access DC via base pointer
     // bptr->d = 300; //wont work
    ((DC *)bptr)->d = 300;
    cout << "bptr now points to derived object \n";

    bptr->show();
    cout << " showing power of pointer \n";
    void *p =  &derived;//generic pointer

        //trying to show that you can point anyData  with pointer .
        //.but before accessing data you have to type  cast otherwise you will get unexpected behavior
    ((DC *)p)->show(); // bptr now points to derives object // casting generic pointer to DC pointer


    /* Accessing d using a pointer of type derive class DC*/

    DC *dptr; // derived type pointer
    dptr = &derived;
    dptr->d = 300;

    cout << "dptr is derived type pointer\n";
    dptr->show();

    cout << "Using ((DC *) bptr)\n";
    ((DC *)bptr) ->d = 400;
    ((DC *)bptr)->show();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

