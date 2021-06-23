/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.6
Write a program using algorithm count() to count how many elements in a container have a specified value;

size_t count(iterator start, iterator end, const TYPE& val);
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
//class definition

//main begin
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(4);
    v.push_back(2);
    v.push_back(8);

    for(int n: v)
        cout << n << " ";

    sort(v.begin(), v.end());

    cout << "\n\n\n";
    for(int n: v)
        cout << n << " ";


    size_t ct = count(v.begin(), v.end(), 2);
    cout << "\n\n2 occur in the list = " << ct  <<  " times" <<  endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

1 2 2 3 4 5 4 2 8


1 2 2 2 3 4 4 5 8

2 occur in the list = 3 times


Process returned 0 (0x0)   execution time : 1.431 s
Press any key to continue.
*/

