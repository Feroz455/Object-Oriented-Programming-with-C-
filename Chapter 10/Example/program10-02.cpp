/*
Page 297
program  10.02
Reading string with getline()

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int size = 20;
    char city[20];
    cout << "Enter city name: \n";
    cin >> city;
    cout << "City name:  " << city << "\n\n";

    cout << "Enter city name again: \n";
    cin.getline(city, size);
    cout << "City name now: " << city << "\n\n";

    cout <<"Enter another city name: " << "\n";
    cin.getline(city, size);
    cout << "New city name : " << city << "\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
First run
Enter city name:
Dhaka
City name:  Dhaka

Enter city name again:
City name now:

Enter another city name:
Narayanganj
New city name : Narayanganj



Process returned 0 (0x0)   execution time : 32.658 s
Press any key to continue.

second run

Enter city name:
New Delhi
City name:  New

Enter city name again:
City name now:  Delhi

Enter another city name:
Great Bombay
New city name : Great Bombay



Process returned 0 (0x0)   execution time : 64.335 s
Press any key to continue.

*/
