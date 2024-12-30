#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> pq;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) {
            int a;
            cin >> a;
            pq.push(a);
        }
        else if(n == 1) {
            pq.pop();
        }
        else if(n == 3) {
            cout << pq.top();
        }
    }
}

