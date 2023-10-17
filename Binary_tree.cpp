#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    cout<<root->left->right->data;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class TreeNode{
//     public:
//     int data;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(int val){
//         this->data=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// class BinaryTree{
//     public:
//     TreeNode *root;
//     BinaryTree(){
//         root=NULL;
//     }
//     void insert(int data){
//         TreeNode* n=new TreeNode(data);
//         if(root==NULL){
//             root=n;
//             return;
//         }
//     }
// };
// int main(){
//     BinaryTree myTree;

//     // Insert nodes into the binary tree
//     myTree.insert(5);
//     myTree.insert(3);
//     myTree.insert(7);
//     myTree.insert(2);
//     myTree.insert(4);
//     myTree.insert(6);
//     myTree.insert(8);

//     return 0;
// }