/*
page 107
program 5.2
Nesting of member function
*/
#include<iostream>
using namespace std;
class set
{
    int m, n;
public:
    void input(void);
    void display(void);
    int largest(void);
};
int set::largest(void)
{
    return(m>n?m:n);
}
void  set::input(void)
{
    cout << "Input values of m and n" << "\n";
    cin >> m >> n;
}
void set::display(void)
{
    cout << "Largest value = " << largest() << "\n"; // calling member function
}
int main()
{
    set A;
    A.input();
    A.display();

    return 0;
}
//main end
//program end
/*
output
Input values of m and n
25

18
Largest value = 25

Process returned 0 (0x0)   execution time : 6.095 s
Press any key to continue.
*/

