#include <iostream>

using namespace std;

void linear_serch(int arr[], int size){
        int x=INT8_MIN;
        for(int i=0;i<size;i++){
            if(arr[i] > x){
                x=arr[i];
            }
        }
        cout<<"max number is "<<x<<endl;
}

int main(){
    int arr[6]={3, 5, 8, 2, 4, 1 };

    linear_serch(arr,6);

    return 0;
}