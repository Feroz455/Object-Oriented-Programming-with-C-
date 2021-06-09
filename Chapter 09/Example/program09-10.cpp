/*
Page 271
program 9.10
this pointer

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition
class person
{
    char name[20];
    float age;
public:
    person(char *s, float a)
    {
        strcpy(name, s);
        age = a;
    }
    person &greater(person &x)
    {
        if(x.age >= age)
            return x;
        else
        {
            printf("address = %u",this);
            printf("address = %u",&this);
              return *this;
        }

    }
    void display()
    {
        cout << "Name: " << name <<"\n"
             << "Age : " << age <<"\n";
    }
};
//main begin
int main()
{
    person p1("John" , 37.50), p2("Ahmed", 29.0), p3("Hebber", 40.25);

    person p = p1.greater(p3);
    cout << "Elder person is \n";
    p.display();

    p = p1.greater(p2);
    cout << "Elder person is \n";
    p.display();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

