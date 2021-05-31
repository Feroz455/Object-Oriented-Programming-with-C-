/*
page 105
program 5.1
Class Implementation
*/
#include<iostream>
using namespace std;

class item
{
    int number; // private by default
    float cost; // Private by default

public:
    void getdata(int a, float b); // prototype declaration
    //Function defined inside class
    void putdata(void)
    {
        cout << "Number :" << number << "\n";
        cout << "Cost   :" << cost << "\n";
    }
};
//************************Member Function Defination******************************//
void item::getdata(int a, float b) // use membership label
{
    number = a; // private variables
    cost = b;
}

/**************************Main program ************************/
int main()
{
    item x; // create object x
    cout << "\nobject x" << "\n";

    x.getdata(100, 299.95); // call member function
    x.putdata();
    item y;
    cout << "\nobject y" <<"\n";
    y.getdata(200, 175.50);
    y.putdata();
    return 0;

}
/*

object x
Number :100
Cost   :299.95

object y
Number :200
Cost   :175.5

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.

*/
