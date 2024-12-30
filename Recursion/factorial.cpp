#include<bits/stdc++.h>
using namespace std;
/*TC-O(n) but it is slow than loop because loop 1 dimentional and 
recursion 1 dimentional go and 1 dimentional back*/
int fact(int n) {
    if(n == 1) return 1;
    return n*fact(n-1);
}
int main() {
    int n;
    cout << "Number of factorial : ";
    cin >> n;
    cout << fact(n);
}