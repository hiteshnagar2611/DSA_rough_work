#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

void sumarray(vector<int> &a,vector<int> &b){
    int i=a.size()-1;
    int j=b.size()-1;

    int carry=0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int sum= a[i]+b[j]+carry;
        int digit= sum%10;
        ans.push_back(digit);
        carry=sum/10;
        i--,j--;
    }

    while(i>=0){
        int sum= a[i]+carry;
        int digit= sum%10;
        ans.push_back(digit);
        carry=sum/10;
        i--,j--;
    }

    while(j>=0){
        int sum= b[j]+carry;
        int digit= sum%10;
        ans.push_back(digit);
        carry=sum/10;
        i--,j--;
    }

    if(carry){
        ans.push_back(carry);
    }


    reverse(ans.begin(),ans.end());

    for(int x:ans){
        cout<<x;
    }


}

int main(){
    vector<int> a{1,2,3,4,5};
    vector<int> b{1,2,3,4,5,6};

    sumarray(a,b);

    return 0;
}