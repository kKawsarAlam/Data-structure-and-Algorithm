#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<int> &arr, int low, int high, int target) {
    
    while(low <= high) {
        int mid = low + (high - low)/2;

        if(target == arr[mid]) return mid;
        if(target > arr[mid])
            return Binary_search(arr, mid+1, high, target);
        else
            return Binary_search(arr, low, mid - 1, target);
    }
    return -1;
}
int main() {
    int n;
    cout << "How many element : ";
    cin >> n;
    vector<int> arr(n);
    cout << "The element is : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "Sorted element : ";
    for(auto num : arr) cout << num << " ";
    cout << endl;
    
    int target;
    cout << "Enter the target value : ";
    cin >> target;
    int low = 0;
    int high = arr.size() - 1;
    int index = Binary_search(arr,low, high, target);

    if(index != -1) cout << "Value found at index " << index;
    else cout << "Not found";

}