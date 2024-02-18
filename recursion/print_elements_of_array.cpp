#include <iostream>

using namespace std;

void print(int arr[], int n, int i){
    //base case
    if(i==n){
        return;
    }

    //print elements
    cout<< arr[i]<<" ";

    //recursive relation
    print(arr, n, i+1); 
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int i=0;

    print(arr, n, i);

    return 0;
}