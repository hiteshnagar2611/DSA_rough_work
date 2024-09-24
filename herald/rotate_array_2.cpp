// with extra space 
//tc o(n) and sc o(n)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
     vector<int> arr{1,2,3,4,5};

     vector<int> temp(arr.size());
     int n= arr.size();
     int k=2;

     for(int i=0;i<arr.size();i++){
        temp[(i+k)%n]= arr[i];
     }

     arr = temp;

     for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
     }


     return 0;
}