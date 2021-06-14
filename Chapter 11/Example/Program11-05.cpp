/*
Page  340
program 11.5
I/O Operation on binary files

*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<iomanip>
using namespace std;

//class definition
const char* filename = "BINARY.txt";
//main begin
int main()
{
    int i;
    float height[4] = {175.5, 153.0, 167.25, 160.70};
    ofstream outfile;

    outfile.open(filename);

    outfile.write((char *) &height, sizeof(height));


    outfile.close();

    for(i = 0; i < 4; i++)
    {
        height[i] = 0;
    }
    ifstream infile;
    infile.open(filename);

    infile.read((char *) &height, sizeof(height));

    for(i  = 0; i < 4; i++)
    {
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed, ios::floatfield);
        cout << setw(10) << setprecision(2) << height[i];
    }
    infile.close();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

