#include <iostream>
#include <vector>

using namespace std;

int serch(vector<int> &v,int target){
    int s=0;
    int e=v.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(v[mid]==target)
            return mid;
        else if(mid-1 > 0 && v[mid-1]==target)
            return mid-1;
        else  if(mid+1 < v.size() && v[mid+1]==target)
            return mid+1;
        else if(v[mid] > target)
            e=mid-2;
        else
            s=mid+2;

        mid=s+(e-s)/2;
    }

    return -1;
}

int main(){
    vector<int> v{10,3,40,20,50,80,70};

    int ans=serch(v,80);

    cout<<"element at index"<<ans<<endl;
    return 0;
}
