// Given a set of coin values and a target amount, is it possible to make the target amount using the coins
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n, vector<int> &dp) {
    if(n <= 1) return n;

    if(dp[n] != -1) return dp[n];
    
    return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}
int main() {
    int n; // 5 
    cin >> n;
    vector<int>dp(n+1, -1); // {-1, -1, -1,-1,-1 }

    int result = fibonacci(n, dp);
    cout << result;
}
