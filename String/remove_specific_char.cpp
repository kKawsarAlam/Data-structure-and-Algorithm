#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;
    s.erase(remove(s.begin(), s.end(), c), s.end());
    cout << s << endl;
}