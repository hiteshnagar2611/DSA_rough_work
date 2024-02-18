#include <iostream>
#include <vector>
using namespace std;

void  subsequences(string str, string output, int i,vector<string>& a){
    //base case
    if(i == str.length()){
        // print 
        cout<< output << endl;
        //store
        a.push_back(output);
        return;
    }

    //exclude
    subsequences(str, output, i+1, a);

    //include  
    output.push_back(str[i]);
    subsequences(str, output, i+1, a);

    
}

int main(){
    string str = "abc";
    string output = "";
    int i=0;
    vector<string> a;

    subsequences(str, output, i, a);

    cout << "total subsequences is : " << a.size()<<endl;

    return 0;
}