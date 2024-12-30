#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
//---> Using recursion method-- TC O(2^n)
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    cin >> n;
    int result = fibonacci(n);
    cout << result;
}
*/

/*
//---> Using dp method-- TC O(n) & SC O(n)
int fibonacci(int n, vector<int> &dp) {
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}
int main() {
    int n;
    cin >> n;
    vector<int>dp(n+1, -1);
    int result = fibonacci(n, dp);
    cout << result;
}
*/

ll dp[100005];
ll fibo(ll n) {
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibo(n-1) + fibo(n-2);
}
int main() {
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0; 

}

//---> Using tabular method-- TC O(n) & SC(1)
// int main() {
//     int n;
//     cin >> n;
//     int pre1 = 1, pre2 = 0;
//     for(int i=2; i<=n; i++) {
//         int cur = pre1 + pre2;
//         pre2 = pre1;
//         pre1 = cur;
//     }
//     cout << pre1;   
// }