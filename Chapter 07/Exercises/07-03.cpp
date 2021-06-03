/*
Page  Create class MAT of size m x n.Define all possible matrix operations
for MAT type object;
program

*/
#include<iostream>
#include<cstdio>
using namespace std;
class MAT
{
    int row;
    int col;
    int **matrix;
    //allocation memory for matrix
    void arrayMemory()
    {
        int i;

        matrix  = new int*[row];
        for(i = 0; i < row; i++)
        {
            *(matrix+i) = new int[col];
        }
    }
public:
    MAT()
    {
        row = 1;
        col = 1;
        arrayMemory();
    }
    MAT(int row, int col)
    {
        this->row = row;
        this->col = col;
        arrayMemory();
    }
    //for square matrix
    MAT(int row)
    {
        this->row = row;
        this->col = row;
        arrayMemory();
    }
    /******************************************/
    //>> operator overloading function
    friend void operator >>(istream &in,MAT &m)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                in >> m.matrix[i][j];
            }
        }
    }
    //<< operator over loading
    friend void operator <<(ostream &out,MAT &m)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                out << m.matrix[i][j] << " \t";
            }
            out << "\n";
        }
    }
    /***************************************************/
    //matrix addition
    MAT operator +(MAT m)
    {
        MAT temp(row,col);
        int i, j;
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                temp.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return temp;
    }
    // matrix subtraction

    MAT operator -(MAT m)
    {
        MAT temp(row,col);
        int i, j;
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                temp.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
            }
        }
        return temp;
    }
    //Matrix transpose ...
    MAT transposeMatrix(void)
    {
        MAT temp(row, col);
        int i, j;
        for(i = 0; i < row; i++)
        {
            for(j = 0; j < col; j++)
            {
                temp.matrix[i][j] = matrix[j][i];
            }
        }
        return temp;

    }
    //matrix multiplication
    MAT operator*(MAT m)
    {
     int i, j,k;
     int sum = 0;
     i = j = k = 0;
     MAT temp(row, col);
     MAT result(row,col);
     temp = m.transposeMatrix();

        for(i = 0; i < row; i++)
        {
            for( k = 0; k < col; k++)
            {
            sum = 0;
                for(j = 0; j < 3; j++)
                {
                sum += matrix[i][j] * temp.matrix[k][j];
                }
            result.matrix[i][k] = sum;
            }
        }
        return result;
    }
      //Scalar addit
    friend MAT operator +(int  a, MAT m)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] += a;
            }
        }
        return m;
    }
      //Scalar addition
    friend MAT operator +(MAT m,int a)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] += a;
            }
        }
        return m;
    }

    //Scalar Subtraction
    friend MAT operator -(int  a, MAT m)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] -= a;
            }
        }
        return m;
    }
     //Scalar Subtraction
    friend MAT operator -(MAT m,int a)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] -= a;
            }
        }
        return m;
    }
     //Scalar multiplication
    friend MAT operator *(int  a, MAT m)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] *= a;
            }
        }
        return m;
    }
    //Scalar multiplication
    friend MAT operator *(MAT m,int a)
    {
        int i, j;
        for(i = 0; i < m.row; i++)
        {
            for(j = 0; j < m.col; j++)
            {
                m.matrix[i][j] *= a;
            }
        }
        return m;
    }
};
//main begin
int main()
{
    MAT m, m1(4,4),m2(4,4), m3(4,4);
    cout << "Enter matrix value\n";
    cin >> m1;
    m2 = m1+m1; //implicit copy constructor call
    cout << "\nm2 two matrix :- \n";
    cout << m2;
    cout << "Enter matrix value\n";
    cin >> m3;
    m = m1  * m2;
    cout << "m = m1  * m2:- " << "\nm matrix :- \n";
    cout << m;

    m = m+10;
        cout << "m = m *10 : - "<< "\nm matrix :- \n";
    cout << m;

    m = m *10;
    cout << "again m = m *10 : - "<< "\nm matrix :- \n";
    cout << m;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter matrix value
4 3 1 1
4 9 7 8
4 1 7 2
3 1 6 7

m2 two matrix :-
8       6       2       2
8       18      14      16
8       2       14      4
6       2       12      14
Enter matrix value
6 7 2 4
9 10 6 1
9 5 8 8
7 8 5 8
 m = m1  * m2:-
m matrix :-
64      80      64      60
160     200     232     180
96      56      120     52
80      48      104     46
 m = m *10 : -
m matrix :-
74      90      74      70
170     210     242     190
106     66      130     62
90      58      114     56
 again m = m *10 : -
m matrix :-
740     900     740     700
1700    2100    2420    1900
1060    660     1300    620
900     580     1140    560

Process returned 0 (0x0)   execution time : 15.841 s
Press any key to continue.
*/

