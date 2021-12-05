/*
Page 180
program OVERLOADING OPERATORS USING FRIENDS
*/


#include<iostream>
#include<cstdio>
using namespace std;
const size_t size = 3;
class vector
{

public:
 int v[size];
    vector(); // constructor null vector
    vector(int *x); // constructor vector from array;
    friend vector operator*(int a, vector b); // friend 1
    friend vector operator*(vector b, int a); // friend 2
    friend void operator >> (istream&, vector &);//this function has return type ...which is not used in this program .
    friend void  operator << (ostream &, vector &);//can be make both this program return type void ,and will get appropiate result

};
vector :: vector ()
{
    for(int i = 0; i < size; i++)
    {
        v[i] = 0;
    }
}
vector :: vector(int *x)
{
    for(int i = 0; i < size; i++)
    {
        v[i] = x[i];
    }
}
vector operator*(int a, vector b)
{
    vector c;
    int i;
    for(i = 0; i < size; i++)
    {
        c.v[i] = a*b.v[i];
    }
    return c;
}
vector operator*(vector b, int a)
{
    vector c;
    int i;
    for(i = 0; i < size; i++)
    {
        c.v[i] = a*b.v[i];
    }
    return c;
}
void operator >> (istream &din, vector &b) //it should return istream pointer
{
    for(int i = 0; i < size; i++)
    {
        din >> b.v[i];
    }

}

void operator << (ostream &dout, vector &b)
{
    dout << "(" << b.v[0];
    for(int i = 1; i < size; i++)
    {
        dout << ", " << b.v[i];
    }
    dout << ")";

}
int x[size] = {2,4,6};
//main begin
int main()
{
    vector m; // invokes constructor 1
    vector n = x; // invokes constructor 2;  or // n = vector(&x[0]); or n = vector(x) or n(x);

    cout << "Enter element of vector m " << "\n";
   // operator>>(cin,m);are you gatting this ???
    cin >> m; //invokes operator>>() function

    cout << "\n";
    cout << "m = " ;
    cout << m ;
    cout << "\n"; // invokes operator <<()

    vector p, q;

    p = 2 * m; // invokes friend 1
    q = n * 2; // invokes friend 2

    cout << "\n";
    cout << "p = ";
    cout << p  ;
    cout <<"\n"; // invokes operators<<();
    cout << "q = ";
    cout << q ;
    cout << "\n";


    getchar();
    return 0;
}

//main end
///Program end

/*
output
Enter element of vector m
10 5 20

m = (10, 5, 20)

p = (20, 10, 40)
q = (4, 8, 12)

Process returned 0 (0x0)   execution time : 4.906 s
Press any key to continue.

*/

