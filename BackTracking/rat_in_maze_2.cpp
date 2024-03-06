// same as previous but code of lines is fewer;

#include <iostream>
#include <vector>

using namespace std;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char direction[] = {'D','U','R','L'};

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


    for(int k=0; k<4; k++){
        int newx = i + dx[k];
        int newy = j + dy[k];
        char dir = direction[k];

        if(isSafe(newx, newy, row, col, maze, visited)){
        visited[newx][newy] = true;
        mazesolve (maze, row, col, newx, newy, visited, path, output + dir);

        //backtracking
        visited[newx][newy] = false;
    }
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