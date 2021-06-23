/*
Page 370
program 12.7
An Application of template Function
*/
#include<iostream>
#include<cstdio>
using namespace std;
#define ARR_MAX 5 // Maximum number of element in an array

template <class T>
T find_min(T ARR[0])
{
    int i = 0;
    T MIN = ARR[0];
    for(i = 1; i < ARR_MAX; i++)
    {
        if(ARR[i] < MIN)
            MIN = ARR[i];
    }
    return (MIN);
}
//main begin
int main()
{
    int I_MIN;
    float F_MIN;
    char C_MIN;
    //Defining different array types

    int I[5] = {20,4,2,38,97};
    float F[5] = {-9.9,12.2,3.1,9.9,8.9};
    char C[5] = { 'a', 'A', '/', '4', '~'};
    //Finding minimum value in each array

    I_MIN = find_min(I);
    F_MIN = find_min(F);
    C_MIN = find_min(C);

    // Printing the results
    cout << "Minimum value in integer array = " << I_MIN;
    cout << "\nMinimum value in Float array = " << F_MIN;
    cout << "\nMinimum value (as per ASCII) in character array " << C_MIN;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Minimum value in integer array = 2
Minimum value in Float array = -9.9
Minimum value (as per ASCII) in character array /

Process returned 0 (0x0)   execution time : 3.859 s
Press any key to continue.
*/

