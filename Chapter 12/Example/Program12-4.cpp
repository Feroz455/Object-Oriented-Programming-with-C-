/*
page 366
program 12-4
Using Default Data Types in a class Definition
*/

#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template <class T1 = int , class T2 = int> class Test //Default data types specified as int
{
    T1 a;
    T2 b;
public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a  << "  and  " << b << "\n";
    }
};
//main begin
int main()
{
    cout << "Instantiating the class template as test1 with float and int data types ..\n ";
    Test<float, int> test1(1.23,123);
    Test<int , char> test2(100, 'W');
    Test<> test3 ('a', 12.982); // Declaration of class object without types specification

    test1.show();

    test2.show();

    test3.show();


    getchar();
    return 0;
}
//main end
///Program end
/*
output
Instantiating the class template as test1 with float and int data types ..
1.23  and  123
100  and  W
97  and  12
*/
