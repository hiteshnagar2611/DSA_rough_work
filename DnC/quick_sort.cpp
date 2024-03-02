#include <iostream>

using namespace std;

int parttion(int arr[], int s, int e){
    //selecting pevit element
    int pivitIndex = s;


    //counting how many < pivit element
    int count=0;
    for(int i=s+1 ; i<=e ;i++){
        if(arr[i] <= arr[pivitIndex]){
            count++;
        }
    }

    // send pivit element to is right position
    swap(arr[pivitIndex], arr[s+count]);
    pivitIndex = s+count;

    //handle left and right parts
    int i=s;
    int j=e;

    while(i < pivitIndex && j > pivitIndex){
        while(arr[i] <= arr[pivitIndex]){
            i++;
        }

        while(arr[j] > arr[pivitIndex]){
            j--;
        }

        // handel case when some wrong element in left or right part
     if(i < pivitIndex && j > pivitIndex){
            swap(arr[i], arr[j]);
        }
    }

    return pivitIndex;
}

void quicksort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return ;
    }

    //parttion logic
    int p = parttion(arr, s, e);

    //recursion logic 
    //for left
    quicksort(arr, s, p-1);

    //for right
    quicksort(arr, p+1, e);
}

int main(){
    int arr[] = {8,1,3,4,20,20,50,40,30,30,30,1,1,1,50,30};
    int n=16;

    int s=0;
    int e=n-1;

    quicksort(arr, s, e);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}