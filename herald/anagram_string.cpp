// using sort TC o(nlogn)

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool anagram(string a, string b){
        if(a.length() != b.length()){
            return false;
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        return a == b;
    
}

int main(){
    string a = "fool";
    string b = "oolf";

    cout<<"is anagram " << anagram(a,b) << endl;

    return 0;
}