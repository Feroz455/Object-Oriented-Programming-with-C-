/*
Page 75
program 3.9
Write a program to calculate the variance and standard deviation of
N numbers
TO check formula
https://www.mathsisfun.com/data/standard-deviation.html

*/
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
//Calculate mean
float Mean(float dog[], int size)
{
    float sum = 0, average;
    for(int i = 0; i < size; i++)
    {
        sum += dog[i];
    }
    average = sum / size;

    return (average);
}
//calculating Variance
float Variance(float dog[],size_t size, float mean)
{
    float Va;
    float sum = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        sum += pow(( dog[i] - mean),2);
    }
    Va = sum/size;
    return (Va);
}
//main begin
int main()
{
    float dogSize[5],mean,variance,SD;
    int i;
    cout << "Enter doge size\n";


    for(i = 0; i < 5; i++)
    {
        cin >> dogSize[i];
    }


     mean = Mean(dogSize,5);
     variance = Variance(dogSize, 5,mean);
     SD = sqrt(variance);
     cout << "Standard Deviation = " << SD;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter doge size
600
470
170
430
300
Standard Deviation = 147.323
Process returned 0 (0x0)   execution time : 24.086 s
Press any key to continue.

*/
