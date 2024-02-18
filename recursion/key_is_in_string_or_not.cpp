#include <iostream>

using namespace std;

bool keyNot(string str, int n, int i, char key){
    // base case
    if(i == n){
        return false;
    }
    // case 1
    if(str[i] == key){
        return true;
    }

    // recursive relation
    return keyNot(str, n, i+1, key);
}

int main(){
    string str="hitesh";
    int n=str.length();
    int i=0;
    char key='p';

    bool ans = keyNot(str, n , i, key);
    
    if(ans){
        cout << "key present int sting "<< endl;
    }
    else{
        cout<< "key not present int sting" << endl;
    }

    return 0;

}