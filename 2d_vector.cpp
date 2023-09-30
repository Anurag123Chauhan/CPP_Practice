#include<bits/stdc++.h>
using namespace std;

int main(){
    int num_row = 3;
    int num_col = 4;
    // Assing vector with default value 0
    vector<vector<int>> v(num_row, vector<int>(num_col, 0));

    // Assign values to the 2D vector
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_col; j++) {
            v[i][j] = i * j;
        }
    }

    // Print the 2D vector
    for (int i = 0; i < num_row; i++) {
        for (int j = 0; j < num_col; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    int num_rows = v.size(); // returns number of rows
    int num_cols = v[0].size(); // returns number of colums
    return 0;

}