#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int i, int j, int row, int col,int maze[3][3], vector<vector<bool>> &visited){
    if(((i>=0 && i<row) && (j>=0 && j<col)) && (maze[i][j] == 1) && (visited[i][j] == false)){
        return true;
    }
    else{
        return false;
    }
}

void mazesolve(int maze[3][3], int row, int col, int i, int j,  vector<vector<bool>> &visited, vector<string> &path,string output){
    //base case
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return ;
    }

    //down case -> i+1, j
    if(isSafe(i+1, j, row, col, maze, visited)){
        visited[i+1][j] = true;
        mazesolve (maze, row, col, i+1, j, visited, path, output + 'D');

        //backtracking
        visited[i+1][j] = false;
    }

    //Up case -> i-1,j

    if(isSafe(i-1, j, row, col, maze, visited)){
        visited[i-1][j] = true;
        mazesolve(maze, row, col, i-1, j, visited, path, output + 'U');

        //backtracking
        visited[i-1][j] = false;
    }

    //Right case -> i, j+1
    if(isSafe(i, j+1, row, col, maze, visited)){
        visited[i][j+1] = true;
        mazesolve(maze, row, col, i, j+1, visited, path, output + 'R');

        //backtracking
        visited[i][j+1] = false;
    }

    //Left case -> i, j-1
    if(isSafe(i, j-1, row, col, maze, visited)){
        visited[i][j-1] = true;
        mazesolve(maze, row, col, i, j-1, visited, path, output + 'L');

        //backtracking
        visited[i][j-1] = false;
    }
}

int main(){
    int maze[3][3] = {{1,0,0},
                      {1,1,0},
                      {1,1,1}};

    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row, vector<bool> (col, false));

    //sorch ki value ko true mark karte
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    mazesolve(maze, row, col, 0, 0, visited, path, output);

    cout<<"the paths is ";

    for(auto x:path){
        cout<< x << " ";
    }

    cout<<endl;

    return 0;

    
}