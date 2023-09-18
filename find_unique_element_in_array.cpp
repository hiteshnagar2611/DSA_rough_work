#include <iostream>

using namespace std;

int main(){
    int arr[11]={1,2,3,4,5,2,3,4,5};

    int ans=0;

    for(int i=0;i<11;i++){
        ans=ans^arr[i];
    }

    if(ans){
        cout<<"unique element present"<<endl;
    }
    else{
        cout<<"unique element not present"<<endl;
    }

    return 0;

}