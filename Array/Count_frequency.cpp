#include<bits/stdc++.h>
using namespace std;
void countFrequency(vector<int> arr) {
    int n = arr.size();
    vector<bool> vis(n, false);
    
    for(int i=0; i<n; i++) {
        if(vis[i] == true) {
            continue;
        }
        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                vis[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    countFrequency(v);   
}