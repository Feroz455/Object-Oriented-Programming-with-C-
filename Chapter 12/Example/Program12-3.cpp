/*
Page 365
program 12-3
Two Generic Data Type in a class Definition

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template <class T1, class T2> class Test
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
    cout << "Instantiating the class template as test1 with float and int data types ..\ntest1: ";
    Test<float, int> test1(1.23,123);
    test1.show();
    cout << "Instantiating the class template as test1 with int  and char  data types ..\ntest2: ";
    Test<float, char> test2(100,'w');
    test2.show();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Instantiating the class template as test1 with float and int data types ..
test1: 1.23  and  123
Instantiating the class template as test1 with int  and char  data types ..
test2: 100  and  w


Process returned 0 (0x0)   execution time : 1.391 s
Press any key to continue.
*/
