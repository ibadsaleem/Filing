#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>

using namespace std;


class Participant{
    int ID;
    string name;
    int score;
    
    public:
    
    Participant(){}
    Participant(int a,string b,int c) 
    {
        ID=a;
        name = b;
        score = c;
    }

    void Input()
    {
        ofstream o;
        o.open("C:/Users/ibads/Desktop/OOP LAB 11/Data.txt", ios::app);
        if(o.is_open())
        {
            cout << "File Opened";
            o.write((char *)this, sizeof(*this));
            o << endl;
            o.close();
        }
        else{
            cout << "File didnt opened";
        }
}
    void Output()
    {
        int id;
        cout << "Enter Id: ";
        cin >> id;
        
         if (ID==id){
            ifstream i;
            
            i.open("C:/Users/ibads/Desktop/OOP LAB 11/Data.txt");
            
           
            if(i.read((char *)this, sizeof(this)))
            {
                
                cout << "ID:" << id;
                cout << "\nName: " << name;
                cout << "\nScore: " << score<<endl;
                
            }
            
            else{}
        }
    }

void  Max()
{
    Participant P;
    P.ID = 2122;
    P.score = 54;
    P.name = "ibad";
    ofstream p;
    p.open("C:/Users/ibads/Desktop/OOP LAB 11/Data.txt", ios::app);
    p.write((char *)&P, sizeof(P));

    while(!p.eof())
    {
        if(P.score>score)
        {
            cout << "Highest Score: " << P.score;
        }
    }
}

};

int main()
{
    Participant P1(2122,"Ibad",54),P2(2123,"Aslam",49);
    
    P1.Input();
    P2.Input();
    cout << "\nPress key to continue\n";
    getch();
    P1.Output();
    P2.Output();
    cout << "\nPress key to continue\n";
    getch();
    P2.Max();
}

