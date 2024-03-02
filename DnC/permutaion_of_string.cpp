#include <iostream>

using namespace std;

void permutaion(string &s , int i){
    //base case
    if(i >= s.length()){
        cout<<s<<endl;
        return ;
    }

    //swaping 
    for(int j=i; j<s.length();j++){
        swap(s[i],s[j]);

        // recursion 
        permutaion(s, i+1);

        //backtraking
        swap(s[i],s[j]);
    }

    
}

int main(){
    string s = "abc";
    int i=0;

    permutaion(s, i);
}