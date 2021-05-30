/*
Page 75
program 3.7
Write programs to evaluate the following function to 0.00017 accuracy
a) sin x = x - (x^3)/3! + (x^5)/5! -(x^7)/7!+..........
b) SUM = 1 + (1/2)^2 + (1/3)^3 + (1/4)^4+......
c) cos x = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6!
*/
#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
//Fact function
int fact(int i)
{
    if(i == 0)
        return(1);
    return (i * fact(i-1));
}

//sin x function
float sinx(int i)
{
    float Sx = 0;
    int j, k;
    for(j = 0, k = 1; j < i; j++, k+=2)
    {
        if(j %2 == 0)
        Sx += (pow(i,k)/fact(k));
        else
            Sx -= (pow(i,k)/fact(k));
    }

    return (Sx);
}

///SUM function

float SUM(int a)
{
    float sum = 0;
    int i, j;
    for(i = 1; i <= a; i++)
    {
        sum += pow((1/i),i);
    }
    return(sum);
}

//cos x function
float cosx(int a)
{
    float result = 1;
    int i, j;
    for(i = 0, j = 2; i <= a; i++, j += 2)
    {
        if(i % 2 == 0)
        result += (pow(a,j))/fact(j);
    }
    return (result);
}
//main begin
int main()
{
    int x;
    cout << "Enter value of x\n";
    cin >> x;

    float sx = sinx(x);
    float sum = SUM(x);
    float cx = cosx(x);

    cout << "Sin x = " << sx << "\n";
    cout << "SUM  = " << sum << endl;
    cout << "cos x = " << cx << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter value of x
5
Sin x = 0.0896306
SUM  = 1
cos x = 37.8925

Process returned 0 (0x0)   execution time : 1.516 s
Press any key to continue.
*/

