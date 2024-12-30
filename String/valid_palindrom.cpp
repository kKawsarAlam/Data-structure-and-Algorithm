#include<bits/stdc++.h>
using namespace std;
bool isAlphaNumeric(char c) {
    if(c >= '0' && c <= '9' || tolower(c) >= 'a' && tolower(c) <= 'z') {
        return true;
    }
    return false;
}

int validPalindrom(string s) {
    int n = s.length();
    int start = 0;
    int end = n-1;
    while(start < end) {
        if(!isAlphaNumeric(s[start])) {
            start++;
            continue;
        }
        if(!isAlphaNumeric(s[end])) {
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])) {
            return false;
        }
    }
}

int main() {
    string s;
    cin >> s;
    validPalindrom(s);
}

/*
Alpha Numeric Charecter
A-Z
a-z
0-9
*/