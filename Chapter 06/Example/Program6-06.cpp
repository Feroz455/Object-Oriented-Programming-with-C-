/*
Page 160
program 6.6
CONSTRUCTING MATRIX OBJECT

*/
#include<iostream>
#include<cstdio>
using namespace std;

class matrix
{
    int **p; // pointer to matrix
    int d1, d2; // dimension
public:
    matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j] = value;
    }
    int & put_element(int i, int j)
    {
        return p[i][j];
    }
};
matrix :: matrix(int x, int y)
{
    d1 = x;
    d2 = y;
    p = new int *[d1]; //Creates an array pointer
    for(int i = 0; i < d1; i++)
    {
        p[i] = new int[d2]; // creates space for each row
    }

}
//main begin
int main()
{
    int m, n;
    cout << "Enter size of matrix: ";
    cin  >> m >> n;

    matrix A(m,n); //matrix object A constructed
    cout << "Enter matrix elements row by row\n";
    int i, j, value;

    for(i = 0; i < m ; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> value;
            A.get_element(i,j, value);
        }
    }
    cout << "\n";
    cout << A.put_element(1,2);
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter size of matrix: 3 4
Enter matrix elements row by row
9 6 5 10 6 4 7 10 10 2
3 6 5 4 3 4

7
Process returned 0 (0x0)   execution time : 6.706 s
Press any key to continue.
*/

