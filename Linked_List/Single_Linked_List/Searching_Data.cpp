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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(40);
    Node* c = new Node(30);
    Node* d= new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int target = 30;
    while(head != NULL) {
        if(head->val == target) {
            cout << "Found";
            head = head->next;
        }
    }
    cout << "Not found";
    return 0;
}