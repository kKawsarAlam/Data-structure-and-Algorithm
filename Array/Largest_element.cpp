#include<bits/stdc++.h>
using namespace std;
// int main() {
//     /*Time-complexity-> O(nlogn)*/
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
//     cout << "Maximum element is : "<< arr[n-1];
// }

int main() {
    /*Time-complexity-> O(n)*/
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int larg_el = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > larg_el) {
            larg_el = arr[i];
        }
    }
    cout << larg_el;
      
}