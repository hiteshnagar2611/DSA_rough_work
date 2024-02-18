#include <iostream>
#include <vector>

using namespace std;

int coin(vector<int>& arr, int target){
    //base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT16_MAX;
    }

    int mini= INT16_MAX;
    for(int i=0; i< arr.size();i++){
        int ans = coin(arr, target - arr[i] );
        if(ans != INT16_MAX){
            mini = min(ans+1 , INT16_MAX);
        }
    }

    return mini;

}

int main(){
    vector<int> arr{1,2};
    int target= 3;

    int ans = coin(arr, target);

    cout << "min possible is : " << ans<< endl;

    return 0;


}