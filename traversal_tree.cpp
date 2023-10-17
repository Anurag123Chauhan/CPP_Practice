// two techniques[BFS/DFS]
// DFS :1)Inorder 2)PreOrder 3)PostOrder traversal;
// Inorder :left, root, right;
// ex: 4,2,5,1,6,3,7
// PreOrder :root, left ,right;
// ex:1,2,4,5,3,6,7
// PostOrder :left , right ,root;
// ex:4,5,2,6,7,3,1

// BSF(breath search traversal);
// at same level || level vise;
// ex:1,2,3,4,5,6,7,8

// preorder
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
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}
int main(){
    
    Node *root=new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(6);
    root->right->right = new Node(8);
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder traversal: ";
    postorder(root);
    // cout<<endl;
    return 0;
}