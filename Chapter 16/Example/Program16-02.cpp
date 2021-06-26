/*
page 452
New Features of ANSI
program 16-02
Use of Keyword mutable
*/
#include<iostream>
#include<string>
using namespace std;
class ABC
{
private:
    mutable int m; // mutable member

public:
    explicit ABC(int x = 0)
    {
        m = x;
    }
    void change() const //const function
    {
        m = m + 10;
    }
    int display() const // const function
    {
        return m;
    }
};
//main begin
int main()
{
    const ABC abc(100); //const object
    cout << "abc contains :" << abc.display();

    abc.change(); // changes mutable data
    cout << "\nabc now contains : " << abc.display();
    cout << "\n";

     getchar();
    return 0;
}
//main end
///Program end

/*
output
abc contains :100
abc now contains : 110


Process returned 0 (0x0)   execution time : 3.990 s
Press any key to continue.
*/
