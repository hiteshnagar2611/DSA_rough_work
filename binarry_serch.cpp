#include <iostream>
#include <vector>
using namespace std;

void binaryserch(vector<int> &arr, int target){
        int start=0;
        int end=arr.size()-1;
        int mid= start + (end-start)/2 ;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[mid]==target){
                ans=1;
                break;
            }
            else if(arr[mid] > target){
                end= mid-1;
            }
            else{
                start=mid+1;
            }
            mid= start + (end-start)/2 ;
        }

        if(ans){
            cout<<"element is present"<<endl;
        }
        else{
            cout<<"element is not present"<<end;
        }
}

int main(){
    vector<int> arr{1,3,5,7,8,10,14,16};

    binaryserch(arr,11);

    return 0;
}