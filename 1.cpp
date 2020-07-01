#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    ofstream o;
    int i = 0;
    char A[20];
    // o.open("C:/Users/ibads/Desktop/OOP LAB 11/a.txt", ios::out); write
    // while (i<20)
    // {
    //     A[i]=getch();
    //     cout << A[i];
    //     o << A[i];
    //     i++;
    // }
    // o.close();

    ifstream in;
    in.open("C:/Users/ibads/Desktop/OOP LAB 11/a.txt", ios::in);   //read
    while (i<20)
    {
        in >> A;
        cout << A;
        i++;
    }
    in.close();

}