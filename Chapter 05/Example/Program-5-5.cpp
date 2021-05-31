/*
Page 118
program 5.5
Static member function
*/
#include<iostream>
#include<cstdio>
using namespace std;
class test
{
    int code;
    static int count; // static member variable
public:
    void setcode(void)
    {
        code = ++count;
    }
    void showcode(void)
    {
        cout << "object number :" << code << "\n";
    }
    static void showcount(void) //static member function
    {
        cout << "count :" << count << "\n";
    }
};
int test :: count;

//main begin
int main()
{
    test t1, t2;
    t1.setcode();
    test ::showcount();
    t2.setcode();
    test ::showcount(); // accessing static function

    test t3;
    t3.setcode();

    test::showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    getchar();
    return 0;
}
//main end
///Program end

/*
output

count :1
count :2
count :3
object number :1
object number :2
object number :3
*/

