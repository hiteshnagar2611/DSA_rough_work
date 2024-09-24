#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insert(Node* &tail, int element, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        newNode->next = newNode;
    }
    else{

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void deleteNode(Node* &tail, int element){
    if(tail == NULL){
        return ;
    }

    Node* prev = tail;
    
    Node* curr = prev->next;
    

    while(curr->data != element){
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    if(curr == prev){
        tail = NULL;
    }
    else if(tail == curr){
        tail = prev;
    }
    
    curr->next = NULL;
    delete curr;

}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<< "list is empaty"<<endl;
        return ;
    }

    do{
        cout<< tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;

    insert(tail, 1,12);
    

    deleteNode(tail, 12);


    print(tail);

    return 0;
}