/*
Page 261
program 9.5
Array of pointers

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition

//main begin
int main()
{
    int i = 0;
    char *ptr[10] = { "books", "Television", "Computer", "Sports"};
    char str[25];

    cout << "\n\n\nEnter your favorite leisure pursuit: ";
    cin >> str;
    for(i = 0; i < 4; i++)
    {
        if(!strcmp(str,ptr[i]))
        {
            cout << "\n\nYour favorite pursuit " << " is available here " << endl;
            break;
        }
    }
    if(i == 4)
    {
        cout << "\n\n Your favorite " << " not available here " << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output



Enter your favorite leisure pursuit: books


Your favorite pursuit  is available here

Process returned 0 (0x0)   execution time : 3.831 s
Press any key to continue.
*/
