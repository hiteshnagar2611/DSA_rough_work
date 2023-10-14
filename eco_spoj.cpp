#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<long long int>& trees, int m, int mid){
    long long int ans=0;
    for(long long int i=0;i<trees.size();i++){
        if(trees[i] > mid){
            ans=ans + (trees[i]-mid);
        }
    }
    if(ans>=m){
        return true;
    }
    else{
        return false;
    }
}

long long int MaxShowBladeHight(vector<long long int >& trees,int m){
    long long int start,end, ans = -1;
    start=0;
    end=*max_element(trees.begin(),trees.end());

    while(start<=end){
        long long int mid=start+(end-start)/2;

        if(isPossible(trees,m,mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;

}

int main(){
    long long int n,m;
    cin>>n>>m;

    vector<long long int > trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<"ans is "<< MaxShowBladeHight(trees, m) <<endl;

    return 0;
}