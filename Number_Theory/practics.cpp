// #include<bits/stdc++.h>
// using namespace std;
// const int mx = 1e5;
// bool isPrime[mx];
// vector<int> primes;

// void primeGen(int n) {
//     // All numbers denote by 1
//     for(int i=3; i<=n; i+=2) isPrime[i] = 1;

//     int sq = sqrt(n);
//     for(int i=3; i<=sq; i+=2) {
//         if(isPrime[i]) {
//             for(int j=i*i; j<=n; j+=i) {
//                 isPrime[j] = 0;
//             }
//         }
//     }
//     isPrime[2] = 1;
//     primes.push_back(2);
//     for(int i=3; i<=n; i+=2) {
//         if(isPrime[i] == 1) {
//             primes.push_back(i);
//         }
//     }
// }

// int main() {
//     int lim = 1e5;
//     primeGen(lim);

//     int n;
//     cin >> n;
//     if(n <= 2) cout << 1 << endl;
//     else cout << 2 << endl;
//     for(int i=1; i<=n; i++) {
//         if(isPrime[i+1]) cout << 1 << " ";
//         else cout << 2 << " ";
//     }
//     cout << endl;
//     return 0;
// }


