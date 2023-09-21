
// DUCH NATIONAL FLAG ALGORITHAM

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> arr{1,3,-1,4,-3,0,-2};

    int low=0;
    int high=arr.size()-1;

    while(low < high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high]>=0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;


}