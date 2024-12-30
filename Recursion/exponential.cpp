#include<bits/stdc++.h>
using namespace std;
int power(int b, int p) {
    if(p == 0) return 1;
    else {
        int res = power(b, p-1);
        return b * res;
    }
}
int main() {
    int b;
    cout << "Enter base value : ";
    cin >> b;
    int p;
    cout << "Enter power value : ";
    cin >> p;
    cout << "Result : " << power(b, p);
}

/*
// Function to calculate power (handles both positive and negative powers) TC-O(log n)
double power(double b, int p) {
    if (p == 0) return 1; // Base case: any number to the power of 0 is 1
    if (p > 0) {
        if (p % 2 == 0) {
            double x = power(b, p / 2);
            return x * x;
        } else {
            return power(b, p - 1) * b;
        }
    } else { // Handle negative power
        return 1.0 / power(b, -p);
    }
}

int main() {
    double b;
    cout << "Enter base value: ";
    cin >> b;
    int p;
    cout << "Enter power value: ";
    cin >> p;
    cout << "Result: " << power(b, p);
    return 0;
}*/
