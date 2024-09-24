#include <iostream>

using namespace std;

class Node{
    
    public:
        int data;
        Node* next;

    //counstructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //decounstructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout<< " memory is free for node of data " << data <<endl;
    }
};

void InsertAtHead(Node* &head, int d){

    //new node create 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, Node* tail, int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int curr = 1;
    while(curr < position-1){
        temp = temp->next;
        curr++;
    }

    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void deleteNode(int position, Node* &head){

    //deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        
        //memory free
        temp->next = NULL;
        delete temp;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count =1;

        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }
}

int main(){
    Node* node1 = new Node(20);
    //cout << node1 -> data << endl;
    //cout << node1 -> next <<endl;

    //head pointed at node1
    Node* head = node1;
    Node* tail = node1;

    //InsertAtHead(head, 12);
    //InsertAtHead(head, 13);

    InsertAtTail(tail, 25);
    InsertAtTail(tail, 26);
    InsertAtTail(tail, 27);

    deleteNode(4, head);

    print(head);


    return 0;
}