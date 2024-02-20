//LEFT TO RIGHT SEARCH

// #include <iostream>
// #include <vector>
// using namespace std;

// int lastElement(vector<char>& v, char element, int i, int &ans){
//     // base case
//     if(i >= v.size()){
//         return ans;
//     }

//     if(v[i]==element){
//         ans = i;
//     }

//     //recursive relation 
//     lastElement(v, element, i+1, ans);

//     return ans;
// }

// int main(){
//     vector<char> v{'h','i','e','e','s','h'};
//     char element='e';
//     int i=0;
//     int ans= -1;
//     ans = lastElement(v, element, i, ans);

//     cout<< "last occurence index is : " << ans << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////

// RIGHT TO LEFT SEARCH 

#include <iostream>
#include <vector>
using namespace std;

int lastElement(vector<char>& v, char element, int i, int &ans){
    // base case
    if(i < 0){
        return ans;
    }

    if(v[i]==element){
        ans = i;
        return ans;
    }

    //recursive relation 
    lastElement(v, element, i-1, ans);

    return ans;
}

int main(){
    vector<char> v{'h','i','e','e','s','h'};
    char element='e';
    int i=v.size()-1;
    int ans= -1;
    ans = lastElement(v, element, i, ans);

    cout<< "last occurence index is : " << ans << endl;

    return 0;
}