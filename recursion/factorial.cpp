#include<iostream>

using namespace std;

int factorial(int n){
    int ans;
    if(n==1){
        
        return 1;
    }

    ans = n * factorial(n-1);
    return ans;
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;

}