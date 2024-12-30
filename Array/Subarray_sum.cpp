#include<bits/stdc++.h>
using namespace std;
/*
int countSubarraySum(vector<int> &arr, int target) {
    int n = arr.size();
    int count = 0;
    // starting point
    for(int st = 0; st < n-1; st++) {
        // 
        for(int end = 0; end < n-1; end++) {
            int sum = 0;
            for(int i = st; i <= end; i++) {
                sum += arr[i];
                if(sum == target) 
                count++;
            }
                
        }
    }
    return ans;
}*/

int countSubarraySum(vector<int>& arr, int target) {
    int count = 0;  
    for (int s = 0; s < arr.size(); s++) {       
        int sum = 0;      
        // Pick an ending point
        for (int e = s; e < arr.size(); e++) {
            sum += arr[e];
            if (sum == target)
                count++;
        }
    }

    return count;
}

int main() {
    cout << "How many element : ";
    int n;
    cin >> n;
    vector<int> v;
    cout << "Enter the elements : ";
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << "Enter the target value : ";
    int target;
    cin >> target;
    cout << countSubarraySum(v, target);
}