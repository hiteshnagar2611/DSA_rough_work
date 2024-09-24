#include <iostream>

using namespace std;

int main(){
    int arr[5]={3,2,1,4,5};

    int i=0;
    int j=4;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}