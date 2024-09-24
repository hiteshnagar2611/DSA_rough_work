#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr1{1,3,5,7,9};
    vector<int> arr2{2,4,6};

    vector<int> ans;
    int i=0;
    int j=0;

    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<=arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i<arr1.size()){
        ans.push_back(arr1[i]);
            i++;
    }

    while(j<arr2.size()){
        ans.push_back(arr2[j]);
            j++;
    }

    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}