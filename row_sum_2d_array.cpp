#include <iostream>

using namespace std;

void rowsum(int arr[][3],int row, int colum){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<colum;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of "<<i+1<<"row is "<<sum<<endl;
        sum=0;
    }
}

void columsum(int arr[][3],int row, int colum){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<colum;j++){
            sum=sum+arr[j][i];
        }
        cout<<"sum of "<<i+1<<"colum is "<<sum<<endl;
        sum=0;
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int colum=3;
    
    rowsum(arr,row,colum);
    columsum(arr,row,colum);
    return 0;
}