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

/*Insert values at any position*/
void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<=pos-1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl << "Insert at position : " << pos << endl;
}

/*Insert value at head*/
void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << "Inserted at head" << endl << endl;
}

/*Delete node at any position*/
void delete_at_position(Node* head, int pos) {
    Node* temp = head;
    for(int i=1; i<=pos-1; i++) {
        temp = temp->next;
        if(temp == NULL) {
            cout << "Invalid Index" << endl;
        }
    }
    if(temp->next == NULL) {
        cout << "Invalid Index" << endl;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

/*Delete head*/
void Delete_head(Node* &head) {
    if(head == NULL) {
        cout << "Head is not available" << endl;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Delete head" << endl;
}

/*Print the linked list*/
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
    Node* head = NULL;
    while(true) {
        cout << "1. Insert at tail" << endl;
        cout << "2. Print linked list" << endl;
        cout << "3. Insert at position" << endl;
        cout << "4. Insert at head" << endl;
        cout << "5. Delete at position" << endl;
        cout << "6. Delete form head" << endl;
        cout << "7. Terminate" << endl;

        int op;
        cin >> op;
        if(op == 1) {
        cout << "Please inter value : "; 
        int val;
        cin >> val;
        insert_at_tail(head,val);
        }
        else if(op == 2) {
        print(head);
        }
        else if(op == 3) {
            cout << "Enter position : ";
            int pos;
            cin >> pos;
            cout << "Enter the value : ";
            int val;
            cin >> val;
            if( pos == 0) {
                insert_at_head(head, val);
            }
            else{
                insert_at_position(head, pos, val);
            }       
        }
        else if(op == 4) {
            int val;
            cout << "Enter the value : ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if(op == 5) {
            int pos;
            cout << "Enter the position : ";
            cin >> pos;
            if(pos == 0) {
                Delete_head(head);
            }
            else {
                delete_at_position(head, pos);
            }
            
        }
        else if(op == 6) {
            Delete_head(head);

        }
        else if(op == 6) {
            break;
        }
    }
    return 0;
}