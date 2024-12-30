#include<bits/stdc++.h>
using namespace std;

// int main() {
//     // index string and value int--
//     // map<string, int> mp;
//     // mp["Kawsar"] = 75;
//     // mp["Mahmud"] = 91;
//     // mp["Partho"] = 80;
//     // cout << mp["Mahmud"] << endl;

//     // index string and value string--
//     // map<string, string> mp;
//     // mp["Kawsar"] = "Male";
//     // mp["Mahmud"] = "Male";
//     // mp["Raisa"] = "Female";
//     // cout << mp["Kawsar"] << " " << mp["Raisa"];

//     // map always sorted--
//     // map<string, int> mp;
//     // mp["Kawsar"] = 75;
//     // mp["Mahmud"] = 91;
//     // mp["Partho"] = 80;
//     // mp["Ahmed"] = 90;

//     // for(auto u : mp) {
//     //     cout << u.first << " " << u.second << endl;
//     // }

// }

/*Frequency count in an array*/
int frequencyCount(vector<int> arr, int x) {
    map<long long, int> mp;
    for(auto u : arr) {
        mp[arr[u]]++;
    }
    return mp[x];
}

int main() {
    
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
    cout << frequencyCount(v, x);
}