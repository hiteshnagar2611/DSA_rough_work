#include <iostream>

using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    // create new arrays 
    int* left = new int[len1];
    int* right = new int[len2];

    //copy array
    int k = s;
    for(int i=0; i < len1; i++){
        left[i] = arr[k];
        k++;
    }

    // copy array
    k = mid+1;
    for(int i=0; i < len2; i++){
        right[i] = arr[k]; // Fix here, copy to right array
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int arrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[arrayIndex++] = left[leftIndex++];
        }
        else{
            arr[arrayIndex++]=right[rightIndex++];
        }
    }

    // copy logic for left
    while(leftIndex < len1){
        arr[arrayIndex++] = left[leftIndex++];
    }

    // copy logic for right 
    while(rightIndex < len2){
        arr[arrayIndex++] = right[rightIndex++];
    }

    // delete the dynamically allocated arrays
    delete[] left;
    delete[] right;
}

void mergesort(int* arr, int s, int e){
    // base condition
    // only single element s== e 
    // or s > e
    if(s >= e){
        return ; 
    }


    int mid = (s+e)/2 ;
    // left side merge sort
    mergesort(arr, s, mid);

    //right side merge sort
    mergesort(arr, mid+1, e);

    // merge tow sorted array
    merge(arr , s, e);
}

int main(){
    int arr[] = {5,2,3,1};
    int s = 0;
    int e = 3; // change here

    mergesort(arr, s, e);

    for(int i=0; i <= e; i++){ // change here
        cout<< arr[i] << " ";
    }
}
