#include<bits/stdc++.h>
using namespace std;
int missingValue(vector<int> arr) {
    int n = arr.size();
    int sum = 0;
    for(int i=0; i < n-1; i++) {
        sum += arr[i];
    }
    int actualSum = (n*(n+1))/2;
    return actualSum - sum;
}
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n-1; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
   cout << missingValue(v);
}