/*
pgge 95
program 4.1
Write a function to read a matrix of size m * n from the key board
*/

#include<iostream>
using namespace std;
void ReadArray(int arr[][10], int r, int c)
{
    int i , j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void displayArray(int array[][10], int r, int c)
{
    int i , j;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    int i, j;
    i = 2;
    j = 10;
    int arr[2][10];
    ReadArray(arr, i , j);
    displayArray(arr, i, j);
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
1       2       3       4       5       6       7       8       9       10
1       2       3       4       5       6       7       8       9       10

Process returned 0 (0x0)   execution time : 8.862 s
Press any key to continue.
*/
