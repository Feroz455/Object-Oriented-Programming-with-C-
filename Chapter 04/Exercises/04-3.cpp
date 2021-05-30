/*
page 95
Program 4.3
Rewrite the program of exercise 4.2 make the row parameter of the matrix
as a default argument
*/
#include<iostream>
using namespace std;
void ReadArray(int arr[][10], int r = 2);
void displayArray(int array[][10], int r = 2);
int main()
{

    int arr[2][10];
    ReadArray(arr);
    displayArray(arr);
    return 0;
}
void ReadArray(int arr[][10], int r)
{
    int i , j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j <10 ; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void displayArray(int array[][10], int r)
{
    int i , j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < 10; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
}
/*
output
1
2
3
4
5
6
7
8
9
10
11
22
33
44
55
66
77
88
99
111
1       2       3       4       5       6       7       8       9       10
11      22      33      44      55      66      77      88      99      111

Process returned 0 (0x0)   execution time : 11.171 s
Press any key to continue.


*/
