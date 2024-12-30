#include<bits/stdc++.h>
using namespace std;

bool isBalance(char c1, char c2) {
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}

int main() {

    stack<int> st;
/*
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while( !st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
*/
/*
 // print stack using user input
    int n;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        st.push(a);
    }

    cout << "Stack size : " << st.size() << endl;

    while( !st.empty() ) {
        cout << st.top() << " ";
        st.pop();
    }
*/

/* Check Balance parenthesis*/
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s; 

        bool done = 1;
        for (auto u : s) {
            if(u == '(' || u == '{' || u == '[') st.push(u);
            else {
                if(st.empty()) {     /*There is no staring braket*/
                    done = 0;
                    break;
                }
                else {
                    if(isBalance(st.top(), u )) {
                        st.pop();
                    }
                    else {
                        done = 0;
                        break;
                    }
                }
            }
        }
        if(!st.empty()) done = 0;
        if(done) cout << "Yes" << endl;
        else cout << "N0" << endl;    
    }
}