#include <iostream>

using namespace std;

int solve(int n){
        //base case
        if(n==0 || n==1){
            return 1;
        }

        //recurse relation
        return solve(n-1) + solve(n-2);
}

int main(){
    int n;
    cout<<"enter no of staires"<<endl;
    cin>>n;

    int ans= solve(n);
    cout<< "no. of combinations for to reach Nth staire "<<ans<<endl;

    return 0;
}