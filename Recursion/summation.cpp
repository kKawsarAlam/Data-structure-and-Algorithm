#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n-1);
}
int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Sum of the number : " << sum(n);
}