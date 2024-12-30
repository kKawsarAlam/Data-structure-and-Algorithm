/*Number of divisor of a range using contribution technique-- TC-O(nln(n))*/
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
int cnt[mx];
// int main() {
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++) {
//         for(int j=i; j<=n; j+=i) {
//             cnt[j]++;
//         }
//     }
//     for(int i=1; i<=n; i++) {
//         cout << i << ": " << cnt[i] << endl;
//     }
//     return 0;
// }

/*Sum of divisor with won multiple*/
// int main() {
//     int n;
//     cin >> n;
//     for(int i=1; i<=n; i++) {
//         for(int j=i; j<=n; j+=i) {
//             cnt[j]++;
//         }
//     }
//     int ans = 0;
//     for(int i=1; i<=n; i++) {
//         ans += i*cnt[i];
//     }
//     cout << ans;  
// }

/*Sum of divisors*/
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j+=i) {
            cnt[j] += i;
        }
    }
    for(int i=1; i<=n; i++) {
        cout << i << ": "<< cnt[i] << endl;
    }
    
}

