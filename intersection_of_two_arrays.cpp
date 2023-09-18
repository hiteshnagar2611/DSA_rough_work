
//brute forse solution

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr{1,2,2,2,3,4,5};
    vector<int> brr{6,2,3,9,10};
    
    vector<int> v;
    for(int i=0;i<arr.size();i++){
        int x=arr[i];
        for(int k=0;k<brr.size();k++){
            if(x==brr[k]){
                //mark
                brr[k]=-1;
                v.push_back(x);
            }
        }
    }
    for(int a:v){
        cout<<a<<" ";
    }
    return 0;

}