#include<bits/stdc++.h>
using namespace std;

struct treeNode{
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val){
        this->data=val;
        left=right=NULL;
    }
};
treeNode* insert(treeNode* root,int val){
    if(root==NULL){
        return new treeNode(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
// void levelorder(treeNode* root){
//     if(root==NULL){
//         return ;
//     }
//     queue<treeNode*>q;
//     q.push(root);
//     while(!q.empty()){
//         treeNode* current=q.front();
//         cout<<current->data<<" ";
//         q.pop();
//         if(current->left!=NULL){
//             q.push(current->left);
//         }
//         if(current->right!=NULL){
//             q.push(current->right);
//         }
//     }
// }
int sumAtk(treeNode* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<treeNode*>q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;
    while(!q.empty()){
        treeNode* node=q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum+= node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
};
int main(){
    treeNode* root=NULL;
    int keys[] = {50, 30, 20, 40, 70, 60, 80,90,100,85};
    for (int key : keys) {
        root = insert(root, key);
    } 
    cout << "Level-order traversal: ";
    int h=sumAtk(root,4);
    cout << h;

    return 0;
}