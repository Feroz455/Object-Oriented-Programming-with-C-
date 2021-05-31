/*
Page 125
program 5.8
Friend Function

*/
#include<iostream>
#include<cstdio>
using namespace std;
class sample
{
    int a;
    int b;
public:
    void setvalue()
    {
        a = 25;
        b = 40;
    }
    friend float mean(sample s);
};
float mean (sample s)
{
    return (float(s.a + s.b)/2.0);
}
//main begin
int main()
{
    sample x;; //object x;
    x.setvalue();
    cout << "Mean value = " << mean(x) << "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Mean value = 32.5


Process returned 0 (0x0)   execution time : 0.687 s
Press any key to continue.

*/

