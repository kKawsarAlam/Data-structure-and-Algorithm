#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    // Create a constructor--
    Node(int val) {
        this->val = val;
        this->next = NULL; // Initially first node contain null while not come second node

    }
};

int main() {
    Node a(10);
    Node b(20);
    Node c(30);

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << " " << b.val << " " << c.val << endl;
    // cout << a.next->val << " " << b.next->val << endl;
    // cout << a.next->next->val;

}