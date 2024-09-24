// using frequency arry
// TC o(n) and SC o(1)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool anagram(string a, string b){
    if(a.length() != b.length()){
        return false;
    }

    vector<int> frq(256,0);

    for(int i=0; i< a.length();i++){
        frq[a[i]]++;
        frq[b[i]]--;
    }

    for(int i=0; i< frq.size();i++){
        if(frq[i] != 0){
            return false;
        }
    }

    return true;
}

int main(){
    string a = "fool";
    string b= "ooil";

    cout<< anagram(a,b)<<endl;

    return 0;
}