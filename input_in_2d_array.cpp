#include <iostream>

using namespace std;

int main(){
    int arr[3][3];
    int row=3;
    int colum=3;
    //input row wise
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cin>>arr[i][j];
        }
    }

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

    //input colum wise
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            cin>>arr[j][i];
        }
    }

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