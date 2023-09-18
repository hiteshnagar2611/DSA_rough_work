#include <iostream>

using namespace std;

void linear_serch(int arr[], int size){
        int start=0;
        int end=size-1;
        while(start < end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
}

int main(){
    int arr[6]={1,2,3,4,5,6};

    linear_serch(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}