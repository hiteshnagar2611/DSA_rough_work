#include <iostream>
#include <vector>

using namespace std;

bool solve(vector<int> &arr,int n,int i){

    if(i==n-1){
        return true;
    }
    if(arr[i] >= arr[i+1]){
        return false;
    }

    return solve(arr,n,i+1);

}

int main(){
    vector<int> v{1,2};

    int n=v.size();
    int i=0;
    bool ans = solve(v,n,i);
    cout<<ans<<endl;
    return 0;
}