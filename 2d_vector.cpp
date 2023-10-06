// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num_row = 3;
//     int num_col = 4;
//     // Assing vector with default value 0
//     vector<vector<int>> v(num_row, vector<int>(num_col, 0));

//     // Assign values to the 2D vector
//     for (int i = 0; i < num_row; i++) {
//         for (int j = 0; j < num_col; j++) {
//             v[i][j] = i * j;
//         }
//     }

//     // Print the 2D vector
//     for (int i = 0; i < num_row; i++) {
//         for (int j = 0; j < num_col; j++) {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int num_rows = v.size(); // returns number of rows
//     int num_cols = v[0].size(); // returns number of colums
//     return 0;

// }
// ! experiment
#include<iostream>
#include<vector>
using namespace std;

int main(){
	//Number of columns
	int num_col = 3;

	// Number of rows
	int num_row = 4;

	// Initializing a single row
	vector<int> row(num_col, 1);

	// Initializing the 2-D vector
	vector<vector<int>> v(num_row, row) ;

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}					   
}
// end