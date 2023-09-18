#include <iostream>

using namespace std;

void linear_serch(int arr[], int size){
        int x=0;
        int y=0;
        for(int i=0;i<size;i++){
            if(arr[i]==1){
                x++;
                
            }
            if(arr[i]==0){
                y++;
            }
        }
        cout<<"1 in array"<<x<<endl;
        cout<<"0 in array"<<y<<endl;
}

int main(){
    int arr[6]={0,1,0,1,1,1 };

    linear_serch(arr,6);
    return 0;
}