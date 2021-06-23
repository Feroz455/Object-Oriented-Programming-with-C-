/*
Latter version of book
Page 355
program  11.9
Template Function with Explicit Function
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition
template<class T>
void display(T x) // Overloaded template function display
{
    cout << "Overloaded Template Display 1 : " << x << "\n";
}
template <class T, class T1>
void display(T x, T1 y) // overloaded template function display
{
    cout << "Overloaded Template Display 2 : " << x << " , " << y << "\n";
}

void display(int x) // overloaded generic display function
{
    cout << "Explicit display : " << x << "\n";
}
//main begin
int main()
{
    display(100);
    display(12.34);
    display(100, 12.34);
    display('c');

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Explicit display : 100
Overloaded Template Display 1 : 12.34
Overloaded Template Display 2 : 100 , 12.34
Overloaded Template Display 1 : c


Process returned 0 (0x0)   execution time : 3.000 s
Press any key to continue.
*/

