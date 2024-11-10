#include <iostream>
#include <vector>
using namespace std;

int mazePath(int maze[4][4], int row, int col, string str, vector<vector <bool>> vis, int N) {
    //base case
    if(row == N-1 && col == N-1 && maze[row][col] == 1)
    {
        cout << str << endl;
        return;
    }
    //move up
    if(row-1 >= 0 && !vis[row-1][col] == 0 && maze[row-1][col] == 1) {
        vis[row-1][col] == true;
        mazePath(maze, row-1,col,str+'U',vis,N);
        vis[row-1][col] == false;
    }

    




}

int main() {
    int maze[4][4] ={{1,0,0,0},
                     {1,1,0,1},
                     {1,1,0,0},
                     {0,1,1,1}};

    return 0;
}