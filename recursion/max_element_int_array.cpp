#include <iostream>

using namespace std;

void maxElement(int arr[], int n, int i, int &maxi){
    

    //base case
    if(i == n){
        return ;
    }

    // case 1
    if(arr[i] > maxi ){
        maxi = arr[i];
    }

    // recursive relation 
    maxElement(arr, n, i+1, maxi);

}

int main(){
    int arr[]={3,6,2,8,1};
    int n=5;
    int i=1;
    int maxi = INT8_MIN; 
    
    maxElement(arr, n, i, maxi);

    cout<< maxi <<endl;

    return 0;
}