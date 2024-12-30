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

/*Insert values at tail*/
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

void print(Node* head) {
    cout << "Linked list is : ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
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
    print(head);

}