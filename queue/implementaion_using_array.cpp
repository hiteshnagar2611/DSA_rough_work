#include <iostream>
#include <vector>

using namespace std;

class Queue{
        int size=1000;
        int* arr;
        int front;
        int rear;
        


    public:
        

        Queue(){
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        void enqueue(int x){
            if(rear < size){
                arr[rear] = x;
                rear++;
            }
            else{
                cout<< "queue is full" <<endl;
            }
        }

        void dequeue(){
            if(rear == front){
                cout<< "queue is empty" <<endl;
            }
            else{
                arr[front] = -1;
                front++;
                if(front == rear){
                    front =0;
                    rear=0;
                }
            }
        }

        bool empty(){
            if(rear == front){
                return true;
            }
            else{
                return false;
            }
        }

        int getfront(){
            return arr[front];
        }

        int getrear(){
            return arr[rear];
        }
};

int main(){
    Queue q;

    q.enqueue(1);
    cout<< q.getfront() <<endl;

    q.enqueue(2);
    cout<< q.getfront() <<endl;

    q.dequeue();
    cout<< q.getfront() <<endl;

    cout << q.getsize() << endl;



}