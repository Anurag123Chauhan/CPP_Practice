#include<iostream>
#include<queue>
using namespace std;

class treeNode {
public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int val) {
        data = val;
        left = right = NULL;
    }
};
treeNode* buildtree() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    treeNode* root = new treeNode(data);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}
void inorder(treeNode* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void levelorder(treeNode* root){

    queue<treeNode*>q;
    q.push(root);

    while(!q.empty()){
        treeNode* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
void insert_leveorder(treeNode* &root){
    queue<treeNode*>q;
    int n;cin>>n;
    root=new treeNode(n);
    q.push(root);

    while(!q.empty()){
        treeNode* temp = q.front();
        q.pop();

        int leftdata;cin>>leftdata;
        if(leftdata != -1){
            temp->left=new treeNode(leftdata);
            q.push(temp->left);
        }
        int rightdata;cin>>rightdata;
        if(rightdata != -1){
            temp->right = new treeNode(rightdata);
            q.push(temp->right);
        }
    }
}
int main() {
    treeNode* root = NULL;
    // root = buildtree();
    // cout << "Inorder traversal: ";
    // inorder(root);
    insert_leveorder(root);
    levelorder(root);
    return 0;
}