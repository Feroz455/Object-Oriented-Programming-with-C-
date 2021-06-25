/*
Page 426
program 14.1
Write a code segment that does the following;
a) Define a vector v with a maximum size of 10
b) Sets the first elements of v to 0;
c) Sets the last element of v to 9
d) Sets the other elements to 1
e) Display the contents of v;
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
    int array[10] = {1,1,1,1,1,1,1,1,1,1};
    vector<int> v(10);
    v = array;
    v.modify(1,0);
    v.modify(9, 9);
    v.show();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
0 1 1 1 1 1 1 1 9 1

Process returned 0 (0x0)   execution time : 1.906 s
Press any key to continue.
*/

