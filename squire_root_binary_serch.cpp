#include <iostream>
using namespace std;

int findsqrt(int n){
    int s=0;
    int e=n;

    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(mid * mid==n){
            return mid;
        }
        else if(mid * mid > n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int presion;
    cin>>presion;

    int ans= findsqrt(n);

    

    double step=0.1;
    double finalans=ans;

    for(int i=0;i<presion;i++){
        for(double j=finalans;j*j <=n; j=j+step){
            finalans=j;
        }
        step=step/10;
    }

    cout<<"final ans "<<finalans<<endl;

    return 0;

}