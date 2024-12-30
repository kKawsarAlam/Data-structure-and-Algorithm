#include<bits/stdc++.h>
using namespace std;
/*
class student {
    public :
        string name;
        int id;
        double cpg;

        void display() {
            cout << name << endl;
            cout << id << endl;
            cout << cpg << endl;
        }

};
int main() {
    student k;
    k.name = "Kawsar";
    k.id = 175;
    k.cpg = 3.75;
    k.display(); // display function call for k object

    student p;
    p.name = "Partho";
    p.id = 115;
    p.cpg = 3.80;
    p.display(); // display function call for p object
  
}*/

class student {
    public :
        string name;
        int id;
        double cgp;

        void display() {
            cout << name << endl;
            cout << id << endl;
            cout << cgp << endl;
        }
        void setValue(string x, int y, double z) {
            name = x;
            id = y;
            cgp = z;
        }

};
int main() {
    student k;
    k.setValue("Kawsar", 175, 3.75);
    k.display();

    student p;
    p.setValue("Partho", 115, 3.80);
    p.display(); 
}