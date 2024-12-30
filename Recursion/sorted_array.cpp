#include<bits/stdc++.h>
using namespace std;
/*
// sort a number of range with decreasing ordered
void sort_dec_order(int n) {
    if(n == 0 ) return;
    cout << n << " ";
    sort_dec_order(n-1);
 }
int main() {
    int n;
    cin >> n;
    sort_dec_order(n);
}*/

// sort a number of range with increasing ordered
void sort_inc_order(int n) {
    if(n == 0 ) return;

    sort_inc_order(n-1);
    
    cout << n << " ";
 }
int main() {
    int n;
    cin >> n;
    sort_inc_order(n);
}








/*
// Check this array is sorted or not 
bool sorted(int arr[], int n) {
    if(n ==1) return true;
    bool pre_array = sorted(arr+1, n-1);   // arr+1 --> point 2nd index and n-1 --> size decrease by 1
    return (arr[0] < arr[1] && pre_array); // check index 0 < index 1 and re
}
int main() {
    int n;
    cout << "Number of array : ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if(sorted(arr,n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}*/