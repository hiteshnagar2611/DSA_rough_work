#include<iostream>

using namespace std;

int fubu(int n){

    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans = fubu(n-1)+fubu(n-2);

    return ans;

}
int main(){

    int n;
    cin>>n;

    int ans = fubu(n);
    cout<< ans<<endl;
    return 0;
}