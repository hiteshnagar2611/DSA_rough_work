#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< vector<int> > v;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}
