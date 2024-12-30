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

void insert_at_tail(Node* &head, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int checkDuplicate(Node* &node) {
    unordered_map<int, int> mp;
    Node* head = node;
    while(node != NULL) {
        mp[node->val]++;
        node = node->next;
    }
    node = head;
    while(node != NULL) {
        if(mp[node->val] > 1) {
            // cout << "YES" << endl;
            return node->val;
            node = node->next;
        }
    }
    // cout << "NO" << endl;
    return -1;

}

int main() {
    int val;
    Node* head = NULL;
    cout << "Enter linked list : ";
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, val); 
    }
    checkDuplicate(head);
}