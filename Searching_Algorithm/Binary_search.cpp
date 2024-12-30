#include<bits/stdc++.h>
using namespace std;
// The time complexity is O(log n) and space complexity is O(1)
int Binary_search(vector<int> &arr, int target) {   
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high - low)/2;

        // if target is at mid index
        if(target == arr[mid]) return mid;

        // if target is greater than mid
        if(target > arr[mid]) 
            low = mid + 1;

        // if target is less than mid
        else 
            high = mid - 1;
    }
    return -1;

}
int main() {
    int n;
    cout << "How many element : ";
    cin >> n;
    vector<int> arr(n);
    cout << "The element :";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "The sorted element : ";
    for(auto num : arr) cout << num << " ";
    cout << endl;

    int target;
    cout << "The terget value : ";
    cin >> target;
    int result = Binary_search(arr, target);

    if(result != -1) cout << "Found at index " << result;
    else cout << "Not found";
}