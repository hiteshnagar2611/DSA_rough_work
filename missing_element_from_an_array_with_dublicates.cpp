// USING NAGITIVE MARKING 
#include <iostream>
#include <vector>

using namespace std;

void findmissing(int *arr, int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }
    }

    for(int j=0;j<n;j++){
        if(arr[j] > 0){
        cout<<j+1<<" ";
        }
    }
}

int main(){
        int n;
        int arr[]={1,4,4,4,2};

        n=sizeof(arr)/sizeof(int);

        findmissing(arr,n);
        return 0;
}


///////////////////////////////////////////////////////////////
// WITHOUT CHANGE ARRAY
#include <iostream>
#include <vector>

using namespace std;

void findmissing(int *arr, int n){
    int i=0;
    while(i<n){
        int index=arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }

}    


int main(){
        int n;
        int arr[]={1,3,5,3,4};

        n=sizeof(arr)/sizeof(int);

        findmissing(arr,n);
        return 0;
}