#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr{-2,-3,4,-1,-2,1,5,-3};

    int maxi= INT16_MIN;
    int sum=0;
    int ansst =-1;
    int ansend = -1;

    int start=-1;

    for(int i=0; i< arr.size();i++){
        if(sum ==0 ){
            int start = i;
        }
        sum=sum + arr[i];


        if(sum > maxi){
            maxi=sum;
            ansst = start, ansend = i; 
        }

        if(sum < 0){
            sum=0;
            start = i+1;
        }
    }

    cout << maxi <<endl;
    for(int i= ansst; i<=ansend;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}