/*
Page 75
program 3.5
An election is contested by five candidates.The candidates are numbered 1 to 5
and the voting is done by marking the candidate number on the ballot paper
Write a program to read the ballots and count the votes cast for each candidate
using an array variable count.In case a, number read is outside the range 1 to 5
the ballot should be considered as a 'spoilt ballot' and the program should also
count the number of spolit ballots

*/
#include<iostream>
#include<cstdio>
using namespace std;

//main begin
int main()
{
    int vote;
    int count[5] = {0};
    cout<< "Enter vote\n";
    cin >> vote;
    while(vote != -999)
    {
        switch(vote)
        {
        case 1:
            count[vote]++;
            break;
        case 2:
            count[vote]++;
            break;
        case 3:
            count[vote]++;
            break;
        case 4:
            count[vote]++;
            break;
        case 5:
            count[vote]++;
            break;
        default:
            count[0]++;
            break;
        }
        cin >> vote;
    }
    for(int i = 0; i<= 5; i++)
    {
        if(i == 0)
        {
            cout << "Spoilt ballot  = " << count[i] << "\n";
        }
        else
        {
            cout << i << " \t Got  = " << count[i] << "\n";
        }
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter vote
3
3 1 2 4 4 1 5 1 1 1
3 2 2 2 5 5 5 5 5 5
2 5 2 2 5 4 2 3 2 1
3 2 5 2 3 5 5 4 5 3
3 4 1 4 3 4 5 3 1 3
1 1 3 3 1 1 1 1 2
-999
Spoilt ballot  = 0
1        Got  = 14
2        Got  = 12
3        Got  = 13
4        Got  = 7
5        Got  = 14

Process returned 0 (0x0)   execution time : 4.219 s
Press any key to continue.
Enter vote
1
6 5 3 6 7 7 4 6 5 5
5 1 3 7 3 6 1 5 6 9
10 10 9 9 5 7 6 9 8 8
7 6 8 7 4 5 5 3 9 2
6 4 2 9 4 9 1 3 6 2
1 7 2 9 2 2 4 6 8
-999
Spoilt ballot  = 31
1        Got  = 5
2        Got  = 6
3        Got  = 5
4        Got  = 5
5        Got  = 8

Process returned 0 (0x0)   execution time : 2.956 s
Press any key to continue.
*/
