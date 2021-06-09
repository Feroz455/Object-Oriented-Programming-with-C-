/*
Page 259
program Pinter with Arrays

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int number[50], *ptr;
    int n, i;
    cout << "\nEnter the count\n";
    cin >> n;
    cout << "Enter the numbers one bye one\n";

    for(i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    /*assigning the base address of numbers to ptr and initializing the sum to  0*/
    ptr = number;
    int sum = 0;
    /*Check out for even inputs and sum up them*/

    for(i = 0; i < n; i++)
    {
        if(*ptr%2 == 0)
        {
            sum += sum + *ptr;
        }
        ptr++;
    }
    cout << "\n\nSum of even numbers: " << sum ;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter the count
5
Enter the numbers one bye one
65
4
1
3
+97


Sum of even numbers: 4
Process returned 0 (0x0)   execution time : 3.625 s
Press any key to continue.
*/

