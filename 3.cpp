#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class Person
{
    string name;
    int age;
    public:
    Person(){}
    Person(string n,int a)
    {
        name = n;
        age=a;
    }

    void display()
    {
        cout << name << endl
             << age;
    }

    void filing()
    {
        ofstream o;
    ifstream i;
    o.open("C:/Users/ibads/Desktop/OOP LAB 11/Person.bin", ios::binary);
    if (o.is_open())
    {
        cout << "File Opened"<<endl;
        
        o.write((char *)this, sizeof(this));
        o.close();
    }
    else {
        cout << "File Didnt Opened";
    }
    i.open("C:/Users/ibads/Desktop/OOP LAB 11/Person.bin");
    if (i.read((char*)this,sizeof(this)))
    {
        while(!i.eof())
        {
        display();
        }
    }
    
}
    
};

int main()
{
    Person P1("Ibad", 20);
    P1.filing();
}