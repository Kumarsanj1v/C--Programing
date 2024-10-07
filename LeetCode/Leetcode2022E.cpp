#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> create2Dmatrix(vector <int>& original,int m, int n) {

    int size = original.size();
    if(size != m * n) {
        return vector <vector <int>>();
    }
    vector <vector <int>> matrix(m, vector <int> (n,0));
    for(int i = 0; i<m; i++) {
        for(int j= 0; j<n; j++) {
            matrix[i][j] = original[i*n+j];
        }
    }
    return matrix;

}
int main() {
    vector<int> original = {1,2,5,6,3,4,9,8};
    int m = 2;
    int n = 2;
    vector <vector <int>> matrix = create2Dmatrix(original,m,n);

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << matrix[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}