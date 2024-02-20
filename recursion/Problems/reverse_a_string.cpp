#include <iostream>

using namespace std;

void revarse(string &str, int n, int i){
    //base case
    if(i >= n){
        return ;
    }

    swap(str[i],str[n]);

    //recursive relation
    revarse(str, n-1, i+1);
}

int main(){
    string str="hitesh";
    int n=str.size()-1;
    int i=0;

    revarse(str, n, i);

    cout<< str << endl;

    return 0;
}

