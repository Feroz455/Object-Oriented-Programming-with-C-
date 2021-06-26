/*
page 448
New Features of ANSI
program 16-1
Using of bool type data
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    int arr1[5] = {1,99,3,-1,6};
    int arr2[5] = {0,66,3,0,6};
    bool comp[5];

    cout << "Array 1: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr1[i] << "\t";
    }

    cout << "\nArray 2: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr2[i] << "\t";
    }
    cout << "\nComparing the two arrays..\n";

    for(int i = 0; i < 5; i++)
    {
        comp[i] = arr1[i] == arr2[i];
    }

    cout << "\nDisplaying the comparison results...\n";
    for(int i = 0; i < 5; i++)
    {
        if(comp[i] == 1)
            cout << "Index " << i << " match\n";
        else
            cout << "Index " << i << " No match\n";
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
