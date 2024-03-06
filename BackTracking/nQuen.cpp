#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    //check karna hain ki current cell [row][col] par queeen rakh sakta hu kya

    //check row
    int i=row;
    int j=col;
    while(j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

    // check left upper digonal
    i=row;
    j=col;
    while(i >= 0 && j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--,j--;
    }

    //check lower digonal
    i=row;
    j=col;
    while(i<n && j >= 0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++,j--;
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

            //recursion
            solve(board, col+1, n);

            //backtracking
            board[row][col] = '-';
        }
    }
}

int main(){
    int n=8;

    vector<vector<char> > board(n,vector<char> (n,'-'));

    int col=0;

    solve(board, col, n);

}