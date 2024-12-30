#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[], int n, int i, int key) {
    if(i == n) return -1;
    if(arr[i] == key) return i;
    return first_occurence(arr, n, i+1, key);
}
int last_occurence(int arr[], int n, int i, int key) {
    if(i == n) return -1;
    int restArray = last_occurence(arr, n, i+1, key);
    if(restArray != -1) return restArray;
    if(arr[i] == key) return i;
    return -1;
}
int main() {
    int n;
    cout << "How many element : ";
    cin >> n;
    int arr[n];
    cout << "The element : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key value : ";
    cin >> key;
    cout << "First Occurence : " << first_occurence(arr,n,0, key) << endl;
    cout << "Last Occurence : " << last_occurence(arr,n,0, key) << endl;
}