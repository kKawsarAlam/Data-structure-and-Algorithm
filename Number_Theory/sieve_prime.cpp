/*Time complexity nln(n)*/
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e8;
bool isPrime[mx];
vector<int> primes;
// void primeGen(int n) {
//     for(int i=2; i<=n; i++) isPrime[i] = 1;
//     for(int i=2; i<=n; i++) {
//         for(int j=i+i; j<=n; j+=i) {
//             isPrime[j] = 0;
//         }
//     }
//     for(int i=2; i<=n; i++) {
//         if(isPrime[i] == 1) {
//             primes.push_back(i);
//         }
//     }
// }

/*All odd number is prime without 2*/
// void primeGen(int n) {
//     for(int i=3; i<=n; i+=2) isPrime[i] = 1;
//     for(int i=3; i<=n; i+=2) {
//         for(int j=i+i; j<=n; j+=i) {
//             isPrime[j] = 0;
//         }
//     }
//     primes.push_back(2);
//     for(int i=3; i<=n; i+=2) {
//         if(isPrime[i] == 1) {
//             primes.push_back(i);
//         }
//     }
// }

/*Time complexity O(n)*/
void primeGen(int n) {
    // All numbers denote by 1
    for(int i=3; i<=n; i+=2) isPrime[i] = 1;

    int sq = sqrt(n);
    for(int i=3; i<=sq; i+=2) {
        if(isPrime[i]) {
            for(int j=i*i; j<=n; j+=i) {
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=n; i+=2) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

int main() {
    int n;
    cin >> n;
    primeGen(n);
    // for(auto u : primes) {
    //     cout << u << endl;
    // }
}