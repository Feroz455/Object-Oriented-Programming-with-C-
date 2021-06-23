/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.7
Create an array with even numbers and a list with odd numbers.
Merge two sequences of numbers into a vector using the algorithm merge().Display the vector

*/
#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

//class definition

//main begin
int main()
{
    int array[5] {2,4,6,7,10};

    list<int> L;
    L.push_back(1);
    L.push_back(3);
    L.push_back(5);
    L.push_back(7);
    L.push_back(9);


    cout << "\nprint = ";
    for(int n: array)
        cout << n << " ";


    cout << "\nlist print = ";
    for(int n: L)
        cout << n << " ";
    vector<int> v(10);
    merge(array, array+5, L.begin(), L.end(), v.begin());

    cout << "\nvector print = ";
    for(int n: v)
        cout << n << " ";
    getchar();
    return 0;
}
//main end
///Program end

/*
output


print = 2 4 6 7 10
list print = 1 3 5 7 9
vector print = 1 2 3 4 5 6 7 7 9 10

Process returned 0 (0x0)   execution time : 2.146 s
Press any key to continue.
*/

