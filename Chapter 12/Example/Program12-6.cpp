/*
Page 369
program 12-6
Bubble sort using Template Function

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

template <class X>
void Swap(X &a, X &b)
{
    X temp = a;
    a = b;
    b = temp;
}
template <class T>
void bubble(T a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = n-1; i < j; j--)
        {
            if(a[j] < a[j-1]);
            {
                Swap(a[j], a[j-1]); //calls template function
            }
        }
    }
}


//main begin
int main()
{
    int x[5] = {10,50,30,40,20};
    float y[5] = {1.1,5.5,3.3,2.2,4.4};

    bubble(x, 5); // calls template function for int values
    bubble(y, 5); // calls template function for float values


    cout << "Sorted x- array: ";
    for(int i = 0; i  < 5; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "Sorted y - array : ";
    for(int j = 0; j < 5; j++)
    {
        cout << y[j] << " ";
    }
    cout << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Sorted x- array: 20 40 30 50 10
Sorted y - array : 4.4 2.2 3.3 5.5 1.1

lamo what is it ??
Process returned 0 (0x0)   execution time : 4.000 s
Press any key to continue.


//My version of Bubble sort
int main()
{
    int i[10] = {15,5,3,4,8,9,5,2,3,1};
    int temp = 0;

    int j , k;
    for(j = 0; j < 10; j++)
    {
        for(k = 1; k < 10; k++)
        {
            if(i[k] > i [k-1])
            {
                temp = i[k];
                i[k] = i[k-1];
                i[k-1] = temp;
            }
        }
    }

    for(j = 0; j < 10; j++)
    {
        printf("%d ", i[j]);
    }
}

*/

