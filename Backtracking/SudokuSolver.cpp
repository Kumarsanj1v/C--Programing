#include <iostream>
#include <vector>
using namespace std;

void printSudoku(int grid[9][9]) {

    for(int i = 0; i<9; i++) {
        for(int j = 0; j<9; j++) {
            cout << grid[i][j] <<" ";
        }
        cout << endl;
    }
}

bool isSafe(int grid[9][9], int row, int col, int digit) {

    for(int i = 0;i<9; i++) {
        if(grid[row][i] == digit) {
            return false;
        }
        if(grid[i][col] == digit) {
            return false;
        }
    }
    int startRow = (row/3) * 3;
    int startCol = (col/3) * 3;
    for(int i = startRow; i<=startRow+2; i++) {
        for(int j = startCol; j<=startCol+2; j++) {
            if(grid[i][j] == digit) {
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int grid[9][9], int row, int col) {
    if(row == 9) {
        printSudoku(grid);
        return true;
    }
    int nextRow = row;
    int nextCol = col + 1;
    if(col+1 == 9){
        nextRow = row+1;
        nextCol = 0;
    }
    if(grid[row][col] != 0) {
        return sudokuSolver(grid,nextRow,nextCol);
    }
    for(int digit = 1; digit<=9; digit++) {
        if( isSafe(grid,row,col,digit)) {
            grid[row][col] = digit;
            if (sudokuSolver(grid,nextRow,nextCol)) {
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}

int main() {
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    bool result = sudokuSolver(grid,0,0);
    return 0;
}