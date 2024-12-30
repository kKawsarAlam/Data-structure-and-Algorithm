#include<bits/stdc++.h>
using namespace std;
/*
vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;     
            }            
        }
    }  
    return ans; 
}
int main() {
    vector<int> nums = {1,2,3,4,5};
    int target = 9;
    
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}*/
void pairSum(int arr[], int n, int target) {
    int l = 0;
    int r = n-1;
    while(l < r) {
        if(arr[l] + arr[r] == target) {
            cout << arr[l] << "," << arr[r] << endl;
            break;
        }
        if(arr[l] + arr[r] > target) {
            l++;
        }
        if(arr[l] + arr[r] < target) {
            
        }
    }
    cout << "Not found";
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int target;
    cin >> target;
    pairSum(arr,n,target);
}
