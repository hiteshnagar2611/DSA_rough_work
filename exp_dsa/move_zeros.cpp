#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{2,0,1,3,0,0,0};

    int i=0;
    
    for(int j=0; j<arr.size();j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }

    return 0;

}