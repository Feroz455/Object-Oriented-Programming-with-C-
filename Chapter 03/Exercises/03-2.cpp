/*
page 75
program 3.2
Write a function that creates a vector of user given size
M using new operator;
*/
#include<iostream>
using namespace std;

//allocation memory for array of size 10
int *Array(void)
{
    //array is a integer type of pointer point to address allocated by new
    int *array = new int[10];
    return(array);
}
//main begin
int main()
{
    int *i;
    //calling Array function ..which will return address of memory allocated by new  in Array function
    cout << "Enter value \n";
    i = Array();
    for(int j = 0; j < 10; j++)
    {
        cin >> *(i+j);
    }
     for(int j = 0; j < 10; j++)
    {
        cout <<  *(i+j) << "\n";
    }
    //Freeing memory
    delete []i;
    //still contain memory address thats why assign null to i
    i = NULL;

    if(i != NULL)
     for(int j = 0; j < 10; j++)
    {
        cout <<  *(i+j) << "\n";
    }
    return 0;
}
//main end
/*
Enter value
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

Process returned 0 (0x0)   execution time : 4.328 s
Press any key to continue.
*/
