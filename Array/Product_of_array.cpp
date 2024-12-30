#include<bits/stdc++.h>
using namespace std;
/*
// Brute-Force approche - TC-O(n^2)
vector<int> productOfArray(vector<int> nums) {
    int n = nums.size();
    vector<int> prod(n, 1);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j) {
                prod[i] *= nums[j];
            }
        }
    }
    return prod;
}
int main() {
    // vector<int> nums = {1,2,3,4};
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<int> res = productOfArray(nums);
    for(auto u : res) {
        cout << u << " ";
    }
}*/

/*
// Optimal solution - TC-O(n), SC-O(n)
vector<int> productOfArray(vector<int> nums) {
    int n = nums.size();
    vector<int> prefix(n, 1), suffix(n, 1), prod(n, 1);

    prefix[0] = 1; 
    for(int i=1; i<n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    suffix[n-1] = 1;
    for(int i = n-2; i>=0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for(int i=0; i<n; i++) {
        prod[i] = prefix[i] * suffix[i];
    }
    return prod;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<int> res =  productOfArray(nums); 
    for(auto val : res) {
        cout << val << " ";
    }
    return 0;
}*/

vector<int> productOfArray(vector<int> nums) {
    int n = nums.size();
    vector<int> prod(n, 1);
 
    for(int i=1; i<n; i++) {
        prod[i] = prod[i-1] * nums[i-1];
    }

    int suffix = 1;
    for(int i = n-2; i>=0; i--) {
        suffix *= nums[i+1];
        prod[i] *= suffix;
    }
    return prod;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<int> res =  productOfArray(nums); 
    for(auto val : res) {
        cout << val << " ";
    }
    return 0;
}