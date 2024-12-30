#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int larg_ele = arr[0];
    for(int i=0; i<n; i++) {
        if(arr[i] > larg_ele) {
            larg_ele = arr[i];
        }
    }
    int sec_larg_ele = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] > sec_larg_ele && arr[i] != larg_ele) {
            sec_larg_ele = arr[i];
        }
    }
    cout << sec_larg_ele;

    return 0;
}