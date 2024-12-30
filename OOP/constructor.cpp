#include<bits/stdc++.h>
using namespace std;

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
        student(string x, int y, double z) {
            name = x;
            id = y;
            cgp = z;
        }

};
int main() {
    student k("Kawsar", 175, 3.75);
    k.display();

    student p("Partho", 115, 3.80);
    p.display(); 
}