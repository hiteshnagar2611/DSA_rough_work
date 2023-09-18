
//brute forse solution

#include <iostream>

using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,10};
    
    int crr[10];
    int k=0;
    for(int i=0;i<10;i++){
        if(i<5){
            crr[i]=arr[i];
        }
        else{
            crr[i]=brr[k];
            k++;
        }
    }
    
    for(int i=0;i<10;i++){
        cout<<crr[i]<<" ";
    }
    return 0;

}