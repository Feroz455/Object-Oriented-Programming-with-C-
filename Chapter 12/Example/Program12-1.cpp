/*
Page  362
program 12.1
Example of class Template

*/
#include<iostream>
#include<cstdio>
using namespace std;
const int size = 3;
//class definition
template <class T> class vector
{
    T v[size]; // type T vector ///-_- memory problem .............
public:
    vector()
    {

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
    int x[3] = {1,2,3};
    int y[3] = {4,5,6};

    vector <int> v1;
    vector <int> v2;
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

v1  = 1 2       3
v2 = 4  5       6
v1 x v2 = 32

Process returned 0 (0x0)   execution time : 7.969 s
Press any key to continue.
*/

