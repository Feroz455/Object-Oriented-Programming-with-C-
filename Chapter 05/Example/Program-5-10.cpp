/*
Page 129
Program 5.10
Swapping private data of classes
*/
#include<iostream>
using namespace std;
class class_2;
class class_1
{
    int value1;
public:
    void intdata(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << "\n";
    }
    friend void exchange(class_1 &, class_2  &);
};
class class_2
{
    int value2;
public:
    void intdata(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << "\n";
    }
    friend void exchange(class_1 &, class_2  &);
};
void exchange(class_1 &x, class_2  &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}
int main()
{
    class_1 C1;
    class_2 C2;

    C1.intdata(100);
    C2.intdata(200);

    cout << "Value before Exchange " << "\n";

    C1.display();
    C2.display();

    exchange(C1, C2);

    cout << "Values after exchange " << "\n";
    C1.display();
    C2.display();
    return 0;
}
/*
output
Value before Exchange
100
200
Values after exchange
200
100

Process returned 0 (0x0)   execution time : 0.094 s
Press any key to continue.
*/

