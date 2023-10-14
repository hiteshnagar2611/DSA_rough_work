#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& cooksRank,int nP, int mid){
    int currp=0;

    for(int i=0;i<cooksRank.size();i++){
        int R=cooksRank[i];
        int j=1;

        int timeTaken=0;

        while(true){
            if(timeTaken + j*R  <= mid){
                ++currp;
                timeTaken += j*R;
                ++j;
            }
            else{
                break;
            }
        }

        if(currp >=nP){
            return true;
        }
    }
    return false;
}

int MinTimeCopmletOrder(vector<int>& cooksRank,int nP){
    int start=0;
    int highestRank= *max_element(cooksRank.begin(),cooksRank.end());

    int  end= highestRank * ((nP*(nP+1))/2);
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(isPossible(cooksRank,nP,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return ans;
}

int main(){

        int nP, nC;
        cin>>nP>>nC;

        vector<int> cooksRank;
        while(nC--){
            int r;
            cin>>r;
            cooksRank.push_back(r);
        }

        cout<<"ans is "<< MinTimeCopmletOrder(cooksRank, nP)<<endl;
}