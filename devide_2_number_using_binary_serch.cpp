#include <iostream>
using namespace std;

int devide(int dividend, int diviser){
    int s=0;
    int e=abs(dividend);

    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(abs(mid * diviser)== abs(dividend)){
            ans = mid;
        }
        else if(abs(mid * diviser) > abs(dividend)){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    if((dividend>0 && diviser>0)||(dividend<0 && diviser<0)){
        return ans;
    }
    else{
        return -ans;
    }
}

int main(){
    int dividend,diviser;
    cin>>dividend;
    cin>>diviser;
    // int presion;
    // cin>>presion;

    int ans= devide(dividend,diviser);

    cout<<"divide is "<<ans<<endl;
    

    // double step=0.1;
    // double finalans=ans;

    // for(int i=0;i<presion;i++){
    //     for(double j=finalans;j*j <=dividend; j=j+step){
    //         finalans=j;
    //     }
    //     step=step/10;
    // }

    // cout<<"final ans "<<finalans<<endl;

    return 0;

}