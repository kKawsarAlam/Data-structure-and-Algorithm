#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1)
        return n;

    int idx = 1; // Start from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[idx++] = arr[i];
        }
    }
    return idx;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int r = removeDuplicates(arr);
    for (int i = 0; i < r; i++) 
        cout << arr[i] << " ";
    return 0;
}
