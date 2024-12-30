#include<bits/stdc++.h>
using namespace std;
/*int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

}*/

/*
// user input and print in vector
int main() {
    vector<int> v;
    int n;
    cout << "How many numbers : ";
    cin >> n;
    cout << "Enter the numbers : ";
    for(int i=0; i<n; i++) {
        int a;  
        cin >> a;
        v.push_back(a);
    }
   
    // for(int i=0; i<v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    // using iterator--
    // vector<int> ::iterator it;
    // for(it = v.begin(); it != v.end(); it++) {
    //     cout << *it << " ";
    // }

    // using for each loop--
    for(auto u:v) {
        cout << u << " ";
    }
}*/

/*
//user input terminate when input 0
int main() {
    int n;
    vector<int> v;
    while(cin >> n) {
        if(n == 0) break;
        v.push_back(n);
    }
    cout << v.size() << endl;
    for(auto u:v) cout << u << " ";
    cout << endl;
}*/


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int a;
    for(int i=0; i<n; i++) {
        
        cin >> a;
        v.push_back(a);
    }
    // sort(v.begin(), v.end());
    // for(auto u:v) {
    //     cout << u << " ";
    // }
    // cout << endl;
    // //sort(v.begin(), v.end(), greater<int>());
    // // or
    // sort(v.rbegin(), v.rend());
    // for(auto x : v) cout << x << " ";
    // cout << endl;


    // v.pop_back(); // backward remove
    // for(auto u : v) cout << u << " ";

    // v.erase(v.begin()); // forward remove
    // for(auto u : v) cout << u << " ";

    // reverse (v.begin(), v.end());
    // while( !v.empty() ) {
    //     cout << v.back() << " ";
    //     v.pop_back();
    // }

    // print unique vector---
    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    for(int i=0; i<sz; i++) {
        cout << v[i] << " ";
    }
}