#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next != NULL && this->prev != NULL){
                delete next;
                delete prev;
                this->next = NULL;
                this->prev = NULL;
            }

        }
};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int d, int position){
    if(position == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count =1;
    while(count < position-1){
            temp = temp->next;
            count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    Node* insertNode = new Node(d);
    insertNode->next = temp->next;
    temp->next->prev = insertNode;
    temp->next = insertNode;
    insertNode->prev = temp;

}

void deleteNode(Node* &head, int position){
    
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;

        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next->prev = curr->prev;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,13);
    insertAtHead(head,14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);
    insertAtPosition(head, tail, 32, 2);
    
    deleteNode(head, 5);

    print(head);

    return 0;
}