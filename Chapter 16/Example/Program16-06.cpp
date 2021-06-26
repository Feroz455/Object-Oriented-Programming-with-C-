/*
page  459
New Features of ANSI
program 16-6
Using Class in NameSpace Scope
*/
#include<iostream>
#include<string>
using namespace std;
namespace classess
{
    class Test
    {
    private:
        int m;
    public:
        Test(int a)
        {
            m = a;
        }
        void display()
        {
            cout << "m =  " << m << "\n";
        }
    };
}
//main begin
int main()
{
    //using scope resolution
    classess::Test T1(200);
    T1.display();

    //using directive
    using namespace classess;
    Test T2(400);
    T2.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output


m =  200
m =  400


Process returned 0 (0x0)   execution time : 1.031 s
Press any key to continue.
*/
