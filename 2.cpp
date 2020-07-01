#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>

using namespace std;


int main()
{
    ifstream i;
    ofstream o;
    char nm;
    i.open("C:/Users/ibads/Desktop/OOP LAB 11/2.cpp.txt");
    o.open("C:/Users/ibads/Desktop/OOP LAB 11/2(1).cpp.txt");

    while (i.eof()==0)
    {
        i >> nm;
        o << nm;
    }
    i.close();
    o.close();
}