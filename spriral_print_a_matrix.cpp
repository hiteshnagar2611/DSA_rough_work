#include <iostream>
#include <vector>

using namespace std;

void waveprint(vector<vector<int>> v){
    int row=v.size();
    int colum=v[0].size();

    int count=0;
    while(count < (row * colum))
    //print left to right
    for(int lr=0,r=0;lr<colum-1;lr++){
        cout<<v[r][lr]<<" ";
    }
    //print up to down 
    for(int ud=0,c=colum-1;ud<row-1;ud++){
        cout<<v[ud][c]<<" ";
    }
    //print right to left 
    for(int rl=colum-2,c=colum-1;rl>0;rl--){
        cout<<v[c][rl]<<" ";
    }
    //print down to up
    for(int ud=0,c=colum-1;ud<row-1;ud++){
        cout<<v[ud][c]<<" ";
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