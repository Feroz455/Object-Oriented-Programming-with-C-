/*
Page 262
program 9.6
Accessing string using pointer and arrays

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition

//main begin
int main()
{
    char str[] = "test";
    int len = strlen(str);
    for(int i = 0; i < len ; i++)
    {
        cout << str[i] << i[str] << *(str+i) << *(i+str);
    }
    cout << endl;

    //String reverse
    int lenM = len / 2;
    cout << len << "\n";
    len--;

    for(int i = 0; i < lenM; i++)
    {
        // summing ascii value
        str[i] = str[i] + str[len - i]; // ('t' = 115) (115 + 115 = 230;) str[i] = 230;
        str[len-i] = str[i] - str[len - i]; // 230 - 115 = 115; str[3] or str[len-i] = 115
        str[i] = str[i] - str[len - i];// str[i] = 230 - 115; or str[i] = 't';
    }
    cout << "\nThe string reversed : " << str;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

