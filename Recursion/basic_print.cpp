#include<bits/stdc++.h>
using namespace std;
/*
--> print 1 to n
void print(int i, int n) {
    if(i > n) return;
    cout << i << " ";
    print(i+1, n);
}
int main() {
    int n;
    cin >> n;
    print(1,n);
}
*/
void print(int n, int i) {
    if(i < 1 ) return;
    cout << i << " ";
    print(i-1, n);
}
int main() {
    int n;
    cin >> n;
    print(n,1);
}

