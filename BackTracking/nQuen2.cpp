//using map

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int,bool> rowcheck;
unordered_map<int,bool> upperleftcheck;
unordered_map<int,bool> lowerleftcheck;

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    //check karna hain ki current cell [row][col] par queeen rakh sakta hu kya

    //check row
    if(rowcheck[row]==true){
        return false;
    }

    //upper left
    if(upperleftcheck[n-1+col-row]==true){
        return false;
    }

    //lower left
    if(lowerleftcheck[row+col] == true){
        return false;
    }
    
    return true;
}

void printSolution(vector<vector<char>> &board, int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void solve(vector<vector<char>> &board, int col, int n){
    //base case
    if(col >= n){
        printSolution(board, n);
        return;
    }

    //1 case solve
    for(int row=0; row < n; row++){
        if(isSafe(row, col, board, n)){
            //rakh do
            board[row][col] = 'Q';
            rowcheck[row]=true;
            upperleftcheck[n-1+col-row]=true;
            lowerleftcheck[row+col]=true;

            //recursion
            solve(board, col+1, n);

            //backtracking
            board[row][col] = '-';
            rowcheck[row]=false;
            upperleftcheck[n-1+col-row]=false;
            lowerleftcheck[row+col]=false;
        }
    }
}

int main(){
    int n=4;

    vector<vector<char> > board(n,vector<char> (n,'-'));

    int col=0;

    solve(board, col, n);

}