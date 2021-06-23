/*
Latter version of book ..chapter 11 though im indexing through 4th edition
by e4 this is chapter 12
Page new edition 384
program 12.10
A table gives a list of car models and the number of units sold in each type in a specified
period. Write a program to store this table in a suitable container, and display interactively
the total value of a particular model sold given the unit_cost of that model;
*/
#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
using namespace std;
//main begin
int main()
{
    long value;
    map<string,int> car;
    car["Abath"] = 5;
    car["Acura"] = 6;
    car["Alfa Romeo"] = 2;
    car["Aston Martic"] = 5;
    car["Audi"] = 2;
    car["BMW"] = 1;
    map<string,int>::iterator itr;
    for(itr = car.begin(); itr != car.end(); itr++)
    {

       cout << itr->first << "'s price: ";
       cin >> value;
    cout << "Car model  '" << itr->first << "' sold = "
         << itr->second << ": pieces " << "\ntotal price = "
         << itr->second * value <<" $"<< endl;

    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Abath's price: 20745
Car model  'Abath' sold = 5: pieces
total price = 103725 $
Acura's price: 37500
Car model  'Acura' sold = 6: pieces
total price = 225000 $
Alfa Romeo's price: 38590
Car model  'Alfa Romeo' sold = 2: pieces
total price = 77180 $
Aston Martic's price: 198995
Car model  'Aston Martic' sold = 5: pieces
total price = 994975 $
Audi's price: 36000
Car model  'Audi' sold = 2: pieces
total price = 72000 $
BMW's price: 35900
Car model  'BMW' sold = 1: pieces
total price = 35900 $

Process returned 0 (0x0)   execution time : 525.699 s
Press any key to continue.
*/

