#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int> &arr, int target) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == target)
            return i;
    return -1;
}
int main() {
    int n;
    cout << "How many number : ";
    cin >> n;
    vector<int> arr(n);
    cout << "The elements : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "The target value : ";
    cin >> target;
    int index = linear_search(arr, target);

    if(index != -1) cout << "Value found at index " << index;
    else cout << "Not found";

}