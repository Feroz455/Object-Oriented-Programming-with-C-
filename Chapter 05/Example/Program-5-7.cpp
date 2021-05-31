/*
Page 123
program 5.7
Object as Arguments
*/
#include<iostream>
#include<cstdio>
using namespace std;

class time
{
    int hours;
    int minutes;
public:
    void gettime(int h, int m)
    {
        hours = h;
        minutes = m;
    }
    void puttime(void)
    {
        cout << hours << "Hours and ";
        cout << minutes << "Minutes " << "\n";
    }
    void sum(time, time); //Declaration with objects as arguments
};
void time::sum(time t1, time t2)
{
     minutes = t1.minutes + t2.minutes;
     hours = minutes/60;
     minutes = minutes%60;
     hours = hours + t1.hours + t2.hours;
}

//main begin
int main()
{
    time T1, T2, T3;
    T1.gettime(2,45);
    T2.gettime(3,30);

    T3.sum(T1,T2); // T3 = T1 + T2


    cout << "T1 = " ;
    T1.puttime(); // display T1
    cout << "T2 = " ;
    T2.puttime(); // display T2
    cout << "T3 = " ;
    T3.puttime(); // display T3
    getchar();
    return 0;
}
//main end
///Program end

/*
output
T1 = 2Hours and 45Minutes
T2 = 3Hours and 30Minutes
T3 = 6Hours and 15Minutes


Process returned 0 (0x0)   execution time : 6.281 s
Press any key to continue.
*/

