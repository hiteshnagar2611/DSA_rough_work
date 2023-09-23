#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void factorial(int n){
    vector<int> ans;
    int carry=0;
    ans.push_back(1);

    for(int i=2;i<=n;i++){
        for(int j=0;j<ans.size();j++){
            int x=ans[j]*i+carry;
            ans[j]=x%10;
            carry=x/10;
        }

        if(carry){
            ans.push_back(carry);
        }
    }

    reverse(ans.begin(),ans.end());

    for(int a:ans){
        cout<<a;
    }
}


int main(){
    int n;
    cout<<"enter number  for factorial"<<endl;
    cin>>n;

    factorial(n);

    return 0;
}