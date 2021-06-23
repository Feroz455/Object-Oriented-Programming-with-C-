/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.2
Write a class template to represent a generic vector.include member function to perform the following tasks;
a) To create the vector
b) To modify the value of a given element
c) To multiply by a scalar value
d) To display the vector in from (10,20,30........)
*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
template<class T>
class vector
{
    void *v;
    T *value;
    int size;
public:
    vector()
    {
        v = new T[1];
        size = 0;
        value =(T*)v;
        *value = 0;
    }
    vector(int size)
    {
        this->size = size;
        v = new T[size];
        value = (T*)v;
        for(int i = 0; i < size; i++)
        {
            *(value+i) = 0;
        }
    }
    void operator=(T *a)
    {
         value = (T*)v;
        for(int i = 0; i < size; i++)
        {
          *(value+i) = a[i];
        }
    }
    void operator*(T n)
    {
        value = (T*)v;
        for(int i = 0; i < size; i++)
        {
          *(value+i) *= n;
        }
    }
    void modify(int n, T va)
    {
        value = (T*)v;

        for(int i = 0; i < size; i++)
        {
            if(i == n-1)
          *(value+i) = va;
        }
    }
    void show(void)
    {
        value = (T*)v;
        for(int i = 0; i < size; i++)
        {
            cout << *(value+i) << " " ;
        }
    }
};
//main begin
int main()
{
    int arr[5] = {1,22,333,4444,55555};
    vector<int> v(5);
    v = arr;
    v.show();
    cout << "\nModify vector\n";
    v.modify(3, 56666);
    v.show();
    cout << "\nMultiply by scalar value \n";
    v*9 ;
    v.show();

    float arr2[5] = {1.1,2.2,3.3,44.44,5.555};
    vector<float> v1(5);
    cout << "\n\n";
    v1 = arr2;
     v1.show();
    cout << "\nModify vector\n";
    v1.modify(3, 56666);
    v1.show();
    cout << "\nMultiply by scalar value \n";
    v1*9 ;
    v1.show();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
1 22 333 4444 55555
Modify vector
1 22 56666 4444 55555
Multiply by scalar value
9 198 509994 39996 499995

1.1 2.2 3.3 44.44 5.555
Modify vector
1.1 2.2 56666 44.44 5.555
Multiply by scalar value
9.9 19.8 509994 399.96 49.995

Process returned 0 (0x0)   execution time : 12.077 s
Press any key to continue.
*/

