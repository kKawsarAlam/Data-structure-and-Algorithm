#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> arr) {
    int n = arr.size();
    for(int i=1; i<n; i++) {
        if(arr[i-1] > arr[i]) 
            return false;    
    }
    return true;
    
}
int main () {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << (isSorted(v) ? "Sorted\n" : "Not sorted");
    
}