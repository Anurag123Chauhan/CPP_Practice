// #include <bits/stdc++.h> 
// using namespace std; 

// class Solution
// {   
//     public:
//     //Function to modify the matrix such that if a matrix cell matrix[i][j]
//     //is 1 then all the cells in its ith row and jth column will become 1.
//     void booleanMatrix(vector<vector<int> > &matrix)
//     {
//         // code here 
//         int r=matrix.size();
//         int c=matrix[0].size();
//         vector<vector<int>>v(r,vector<int>(c,0));
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 if(matrix[i][j]==1){
//                     v[i].assign(c,1);
//                     for(int k=0;k<r;k++){
//                         v[k][j]=1;
//                     }
//                 }
//             }
//         }
//         matrix.assign(v.begin(),v.end());
//     }
// };


// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin>>t;
//     while(t--) 
//     {
//         int row, col;
//         cin>> row>> col;
//         vector<vector<int> > matrix(row); 
//         for(int i=0; i<row; i++)
//         {
//             matrix[i].assign(col, 0);
//             for( int j=0; j<col; j++)
//             {
//                 cin>>matrix[i][j];
//             }
//         }
        
//         Solution ob;
//         ob.booleanMatrix(matrix);


//         for (int i = 0; i < row; ++i)
//         {
//             for (int j = 0; j < col; ++j)
//             {
//                 cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }
// ! POTD(GOG) 
// ? Question name [Boundary traversal of matrix]
// ! Solution
#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>v;
        if(n==1){
            for(int a=0;a<m;a++){
                v.push_back(matrix[0][a]);
            }
        }
        else if(m==1){
            for(int a=0;a<n;a++){
                v.push_back(matrix[a][0]);
            }
        }
        else{
            int i=0;
            for(int j=0;j<m;j++){
                v.push_back(matrix[i][j]);
            }
            int j=m-1;
            for(int k=1;k<n;k++){
                v.push_back(matrix[k][j]);
            }
            int p=n-1;
            for(int k=m-2;k>=0;k--){
                v.push_back(matrix[p][k]);
            }   
            int c=0;
            for(int k=n-2;k>=1;k--){
                v.push_back(matrix[k][c]);
            }
        }
        
        return v;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}