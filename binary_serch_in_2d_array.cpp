#include <iostream>
#include <vector>

using namespace std;

int serch(vector<vector<int>> &v, int key){
        int s=0;
        int e=v.size() * v[0].size() -1 ;
        int colum=v[0].size();

        int mid=s+(e-s)/2;
        int ans=0;

        while(s <= e){
            int rowindex=mid/colum;
            int columindex=mid%colum;

            if(v[rowindex][columindex]==key){
                ans=1;
                break;
            }
            else if(v[rowindex][columindex] < key){
                s=mid+1;
            }
            else if(v[rowindex][columindex] > key){
                e=mid-1;
            }

            mid=s+(e-s)/2;
            
        }

        return ans;

}

int main(){

    vector<vector <int> > v{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

    int ans=serch(v,0);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present "<<endl;
    }
    return 0;
}