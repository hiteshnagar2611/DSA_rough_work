#include <iostream>

using namespace std;

void minelement(int arr[][3],int row,int colum){
    int min=INT16_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            if(arr[i][j] < min){
                min=arr[i][j];
            }
        }
    }
    cout<<"min element is "<<min<<endl;
}

void maxelement(int arr[][3],int row,int colum){
    int max=INT16_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            if(arr[i][j] > max){
                max=arr[i][j];
            }
        }
    }
    cout<<"max element is "<<max<<endl;
}



int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3;
    int colum=3;

    minelement(arr,row,colum);
    maxelement(arr,row,colum);

    return 0;
}