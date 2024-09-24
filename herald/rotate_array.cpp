// in place without extra space
// tc o(n) and sc o(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rev(vector<int> &arr, int i, int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

}

int main(){

    vector<int> arr{1,2,3,4,5};

    rev(arr, 0, arr.size());
    rev(arr, 0, 2);
    rev(arr, 2, arr.size());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}