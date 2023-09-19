#include <iostream>

using namespace std;

void transpos(int arr[][3],int row,int colum,int tran[][3]){
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            tran[j][i]=arr[i][j];
            }
        }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int colum=3;

    cout<<"printing befor transpose"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int tran[3][3];
    transpos(arr,row,colum,tran);

    cout<<"printing after transpos"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}