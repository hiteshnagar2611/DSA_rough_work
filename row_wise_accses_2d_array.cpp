#include <iostream>

using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<"printing row wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"printing colum wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}