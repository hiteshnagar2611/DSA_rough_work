#include <iostream>

using namespace std;

bool sorted(int arr[], int n, int i){
    //base case
    if(i >= n-1){
        return true;
    }
    // case 1
    if(arr[i] > arr[i+1]){
        return false;
    }
    //recursive relation
    return sorted(arr, n, i+1);

}

int main(){
    int arr[]={3,5,20,10,32};
    int n=5;
    int i=0;

    bool ans = sorted(arr, n , i);

    if(ans){
        cout<< "arr is sorted " << endl;
    }
    else{
        cout << " arr is not sorted " << endl;
    }

    return 0;
}