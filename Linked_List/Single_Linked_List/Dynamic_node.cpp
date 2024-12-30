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
    Node* head = new Node(10); // address of object
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    cout << head->val << " " << head->next->val << " " << head->next->next->val;
}