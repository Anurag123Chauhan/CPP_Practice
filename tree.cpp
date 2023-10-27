#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};

TreeNode* insert(TreeNode* root,int val){
    if(root==NULL){
        return new TreeNode(val);
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }
    else if(root->data<val){
        root->right=insert(root->right,val);
    }
    return root;
}

int justnext(TreeNode* root){
    if(root->left!=NULL)
    return justnext(root->left);

    return root->data;
}
TreeNode* del(TreeNode* root,int key){
    if(root==NULL)return root;

    if(key<root->data){
        root->left=del(root->left,key);
    }
    else if(key>root->data){
        root->right=del(root->right,key);
    }
    else{
        if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        else{
            int node = justnext(root->right);
            root->data= node;
            root->right=del(root->right,node);
        }
    }
    return root;
}
int main(){

    return 0;
}
