/*
Redo Exercise 2.5 using a class called temp and member function
*/
#include<iostream>
using namespace std;

/// class define
class temp
{
private:
    float Fahrenheit;
    float Celsius;
public:
    void setFahrenheit(float Fahrenheit)
    {
        this->Fahrenheit = Fahrenheit;
    }
    float getFahrenheit(void)
    {
        return(this->Fahrenheit);
    }
    void convertion(void)
    {
       this->Celsius = ((this->Fahrenheit - 32)*5)/9;
       cout << this->Fahrenheit << " F = " << this->Celsius << "C\n";
    }

};

// Main begin
int main()
{
    float te;
    temp t;
    cout << "Enter Temperature in Fahrenheit\n";
    cin >> te;
    t.setFahrenheit(te);
    t.convertion();
}
//main end
///Program end
/*
output
Enter Temperature in Fahrenheit
78
78 F = 25.5556C

Process returned 0 (0x0)   execution time : 1.969 s
Press any key to continue.

*/
