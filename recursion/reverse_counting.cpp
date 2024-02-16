#include<iostream>

using namespace std;

void revcounting(int n){

    if(n==0){
        return ;
    }

    cout<< n << " ";
    revcounting(n-1);
}

int main(){

    int n;
    cin>>n;

    revcounting(n);
}