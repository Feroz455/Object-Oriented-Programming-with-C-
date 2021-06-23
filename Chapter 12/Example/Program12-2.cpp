/*
Page  363
program 12.2
Another Example of class Template

*/
#include<iostream>
#include<cstdio>
using namespace std;
const int size = 3;
//class definition
template <class T> class vector
{
    T v[3]; // type T vector ///-_- memory problem .............
public:
    vector()
    {
        //v = new T[size];
        for(int i = 0; i < size; i++)
        {
            *(v+i) = 0;
        }


    }
    vector(T* a)
    {
        for(int i = 0; i < size; i++)
                v[i] = a[i];
    }
    T operator *(vector &y)
    {
        T sum = 0;
        for(int i = 0; i < size; i++)
            sum += this->v[i] * y.v[i];
        return sum;
    }
    void display(void)
    {
        for(int i = 0; i < size; i++)
        {
            cout << v[i] << "\t";
        }
        cout << "\n";
    }
};
//main begin
int main()
{
    float x[3] = {1.1,2.2,3.3};
    float y[3] = {4.4,5.5,6.6};

    vector <float> v1;
    vector <float> v2;
    v1 = x;
    v2 = y;
    cout << "v1  = " ;
    v1 .display();

    cout << "v2 = ";
    v2.display();

    cout << "v1 x v2 = " << v1*v2;

    getchar();
    return 0;
}
//main end
///Program end

/*
output

v1  = 1.1       2.2     3.3
v2 = 4.4        5.5     6.6
v1 x v2 = 38.72

Process returned 0 (0x0)   execution time : 1.956 s
Press any key to continue.
*/

