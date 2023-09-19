#include <iostream>

using namespace std;

int serch(int arr[][3],int row,int colum,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}



int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int colum=3;

    int x=serch(arr,row,colum,12);
    if(x){
        cout<<"prsent"<<endl;
    }
    else
    cout<<"not prsent"<<endl;

    return 0;
}