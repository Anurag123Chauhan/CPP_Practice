// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val){
//         data=val;
//         left=right=NULL;
//     }
// };

// int main(){
//     struct Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->right=new Node(5);
//     cout<<root->left->right->data;
//     return 0;
// }

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
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->data=val;
        left=right=NULL;
    }
};
TreeNode* insert(TreeNode* root,int val){
    if(root == NULL){
        return new TreeNode(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else if(val>root->data){
        root->right =insert(root->right,val);
    }
    return root;
}
void preorder(TreeNode* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);  
        preorder(root->right);
    }
}
void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void postorder(TreeNode* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    TreeNode* root=NULL;
    int keys[] = {50, 30, 20, 40, 70, 60, 80};
    for (int key : keys) {
        root = insert(root, key);
    }
    cout << "Inorder traversal before deletion: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postorder(root);

    return 0;
}