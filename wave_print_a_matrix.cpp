#include <iostream>
#include <vector>

using namespace std;

void waveprint(vector<vector<int>> v){
    int row=v.size();
    int colum=v[0].size();

    for(int c=0;c<colum;c++){
        if(c%2==0){
            for(int r=0;r<row;r++){
                cout<<v[r][c]<<" ";
            }
        }
        else{
            for(int r=row-1;r>=0;r--){
                cout<<v[r][c]<<" ";
            }
        }
    }

}

int main(){
    vector<vector<int>> v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    waveprint(v);

    return 0;
}