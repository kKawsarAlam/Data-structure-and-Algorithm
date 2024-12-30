#include<bits/stdc++.h>
using namespace std;
int wordCount(string s) {
    int count = 0;
    if(s.empty()) return 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') count++;
    }
    return count + 1;
}
int main () {
    string s;
    getline(cin, s);
    cout << wordCount(s);
}