#include <bits/stdc++.h>
using namespace std;
// Print all sub-array of array
/*int main()
{
    int n;
    cout << "How many numbers : ";
    cin >> n;
    int arr[n];
    cout << "Enter the number : ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Subarray : " << endl;
    for (int st = 0; st < n; st++)
    {
        for (int end = 0; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i] ;
            }
            cout <<" ";
        }
        cout << endl;
    }
    return 0;
}*/

/*
Find the maximum subArray sum -- TC-O(n^2)
int subArraySum(vector<int> &arr) {
    int mx = arr[0];
    for(int i=0; i<arr.size(); i++) {
        int curSum = 0;

        for(int j=i; j<arr.size(); j++) {
            curSum += arr[j];
            mx = max(mx, curSum);
        }
    }
    return mx;
}
int main() {
    int n;
    cout << "How many numbers : ";
    cin >> n;
    vector<int> v;
    cout << "Enter the array : ";
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
     int sum = subArraySum(v);
     cout << "Sum : " << sum;
   
}*/