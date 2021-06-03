/*
Page 174
program Overloading unary MINUSE

*/
#include<iostream>
#include<cstdio>
using namespace std;
class space
{
    int x;
    int y;
    int z;
public:
    void getdata(int a, int b, int c);
    void display(void);
   // void operator-(); // overload unary minus
    friend void operator -(space &a);
};
void operator-(space &a)
{
    a.x = -a.x;
    a.y = -a.y;
    a.z = -a.z;
}
void space :: getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space :: display(void)
{
    cout << x << " ";
    cout << y << " ";
    cout << z << " \n";
}
// Create ambiguous ..thats why it was commented
/*void space :: operator-(void)
{
    x = -x;
    y = -y;
    z = -z;
}*/
//main begin
int main()
{
    space S;
    S.getdata(10,-20,30);
    cout << "S : ";
    S.display();
    S;// S.operator-();  this is your function and -S
    cout << "S = ";

    S.display();
    /*
    gcc compiler make this error
    error: expected primary-expression before ';' token
    */
    //gcc compiler dont support this formate but VS dose
    S-;
    S.display();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

