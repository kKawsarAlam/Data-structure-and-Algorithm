#include<bits/stdc++.h>
using namespace std;
int main() {
    // string s;
    // cin >> s;
    // reverse(s.begin(), s.end());
    // cout << s;

    string str;
    int st = 0, end = str.size() -1;
    while(st < end) {
        swap(str[st++], str[end--]);
    }
    cout << str;
}