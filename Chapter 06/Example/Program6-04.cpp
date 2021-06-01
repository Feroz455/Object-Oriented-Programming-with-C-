/*
Page 157
program 6.4
COPY CONSTRUCOR

*/
#include<iostream>
#include<cstdio>
using namespace std;
class code
{
    int id;
public:
    code(){};          // constructor
    code(int a){id = a;} //constructor again
    code (code &x)     // copy constructor
    {
        id = x.id; // copy in the value
    }
    void display(void)
    {
        cout << id << "\n";
    }
};
//main begin
int main()
{
    code A(100); //object A is created and initialized
    code B(A);   //copy constructor called
    code C = A; // copy constructor called again

    code D; // D is created not initialized
    D = A; // copy constructor called again


    cout << "\n id of A: "; A.display();
    cout << "\n id of B: "; B.display();
    cout << "\n id of C: "; C.display();
    cout << "\n id of D: "; D.display();


    getchar();
    return 0;
}
//main end
///Program end

/*
output


 id of A: 100

 id of B: 100

 id of C: 100

 id of D: 100


Process returned 0 (0x0)   execution time : 2.453 s
Press any key to continue.
*/

