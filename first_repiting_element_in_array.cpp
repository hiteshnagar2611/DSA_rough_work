#include <iostream>

using namespace std;

void findrepiting(int arr[],int n){
    for(int i=0;i<n;i++){
        bool repiting=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}


int main(){
    int n;
    int arr[]={1,2,4,5,3,5};
    n=sizeof(arr)/sizeof(int);

    findrepiting(arr,n);

    return 0;

}