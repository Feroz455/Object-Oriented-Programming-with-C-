/*
Page 75
program 3.6
A cricket team has the following table of batting figure for a series of test
matches

Player's name        Runs       Innings          Times Not out
Sachin               8430       230              18
Saurav               4200       130              9
Rahul                3350       105              11

Write a program to read the figure set out in the above from to calculate the
batting averages and to print out the complete table including the averages
*/
#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;
class Player
{
public:
    char name[30];
    int runs ;
    int innigs;
    int TimeNotOut;
    float average(void)
    {
        return(float(this->runs)/float(this->innigs));
    }
};
//main begin
int main()
{
    Player p[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        cout << "Enter player name : "  ; cin >> p[i].name;
        cout << "Enter total runs : " ; cin >> p[i].runs;
        cout << "Enter total innings: "; cin >> p[i].innigs;
        cout << "Times not out: "; cin >> p[i].TimeNotOut;
    }


    cout  << setw(15) << "Player's name" << setw(15) << "Runs"  << setw(15)<< "Innings"<< setw(15) << "Times not out " << setw(15) << "Average\n";
     for(i = 0; i < 3; i++)
    {
       cout  << setw(15) << p[i].name << setw(15) << p[i].runs  << setw(15)<< p[i].innigs << setw(15) <<p[i].TimeNotOut << setw(15) << p[i].average() << "\n";
    }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter player name : Sachin
Enter total runs : 8430
Enter total innings: 230
Times not out: 18
Enter player name : Saurav
Enter total runs : 4200
Enter total innings: 130
Times not out: 9
Enter player name : Rahul
Enter total runs : 3350
Enter total innings: 105
Times not out: 11
  Player's name           Runs        Innings Times not out        Average
         Sachin           8430            230             18        36.6522
         Saurav           4200            130              9        32.3077
          Rahul           3350            105             11        31.9048

Process returned 0 (0x0)   execution time : 43.681 s
Press any key to continue.
*/
