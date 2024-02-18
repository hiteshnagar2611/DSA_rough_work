#include <iostream>

using namespace std;

int BinarySearch(int arr[], int s, int e, int target){
    //base case
    if(s > e){
        return -1;
    }
    // case 1
    int mid = s+(e-s)/2;

   
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid] > target){
         //left side search
        return BinarySearch(arr , s, mid-1, target);
    }
    else{
        //right side search
        return BinarySearch(arr , mid+1, e, target);
    }
}

int main(){
    int arr[5]={2,4,6,7,8};
    int s=0;
    int e= 4;
    int target= 1;

    int ans = BinarySearch(arr, s, e, target);
    cout<< " element at index: " << ans << endl;
    return 0;

}