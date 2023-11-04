#include<iostream>
#include<algorithm>
using namespace std;

// class node{
// public:
//     int data;
//     node* left;
//     node* right;
//     int height;

//     node(int val){
//         data=val;
//         left=right=NULL;
//         height=1;
//     }
// };
// int height(node * root){
//     if(root==NULL)return 0;
//     return root->height;
// }
// int getbalance(node* root){
//     if(root==NULL)return 0;
//     return height(root->left)-height(root->right);
// }
// node* leftrotate(node* x){
// /* assing value
//             y
//           /  \
//          x    t3
//         / \
//        t1  t2
//     */
//    node *y=x->right;
//    node* t2=y->left;

// //    rotate
//     y->left=x;
//     x->right=t2;

//     y->height=max(height(y->left),height(y->right))+1;
//     x->height=max(height(x->left),height(x->right))+1;

//     return y;
// }
// node* rightrotate(node* y){
//     /* assing value
//             y
//           /  \
//          x    t3
//         / \
//        t1  t2
//     */
//     node *x = y->left;
//     node *t2 = x->right;
//     // rotate
//     x->right=y;
//     y->left=t2;
//     // change height

//     y->height=max(height(y->left),height(y->right))+1;
//     x->height=max(height(x->left),height(x->right))+1;

//     return x;
// }

// node* insert(node* root ,int key){
    
//     if(root==NULL)return new node(key);

//     if(key<root->data){
//         root->left = insert(root->left, key);
//     }
//     else if(key>root->data){
//         root->right = insert(root->right, key);
//     }
//     else   
//         return root;

//     root->height= 1 + max(height(root->left),height(root->right));

//     int balance=getbalance(root);

//     if(balance > 1 && key < root->left->data){
//         return rightrotate(root);
//     }
//     if(balance<-1 && key> root->right->data){
//         return leftrotate(root);
//     }
//     if(balance > 1 && key>root->left->data){
//         root->left=leftrotate(root->left);
//         return rightrotate(root);
//     }
//     if(balance<-1 && key<root->right->data){
//         root->right=rightrotate(root->right);
//         return leftrotate(root);
//     }
//     return root;
// }
// void preorder(node* root){
//     if(root==NULL)return;

//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

class node{
public:
    int data;
    node* left;
    node* right;
    int height;
    node(int val){
        data=val;
        left=right=NULL;
        height=1;
    }
};

int height(node* root){
    if(root==NULL)return 0;
    return root->height;
}
int getbalance(node* root){
    if(root==NULL)return 0;

    return height(root->left)-height(root->right);
}
node* rightrotate(node* y){
    node* x=y->left;
    node* t2=x->right;

    x->right=y;
    y->left=t2;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;

    return x;
}

node* leftrotate(node* x){
    node* y=x->right;
    node* t2=y->left;

    y->left=x;
    x->right=t2;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;

    return y;
}
node* insert(node* root, int key){
    if(root==NULL)return new node(key);

    if(key<root->data){
        root->left=insert(root->left,key);
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    else  
        return root;

    root->height=1+ max(height(root->left),height(root->right));

    int balance=getbalance(root);

    if(balance>1 && key<root->left->data){
        return rightrotate(root);
    }
    if(balance<-1 && key>root->right->data){
        return leftrotate(root);
    }
    if(balance>1 && key>root->left->data){
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1 && key<root->right->data){
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;
}
void preOrder(node *root) 
{ 
	if(root != NULL) 
	{ 
		cout << root->data << " "; 
		preOrder(root->left); 
		preOrder(root->right); 
	} 
} 

// Driver Code 
int main() 
{ 
	node *root = NULL; 
	
	/* Constructing tree given in 
	the above figure */
	root = insert(root, 10); 
	root = insert(root, 20); 
	root = insert(root, 30); 
	root = insert(root, 40); 
	root = insert(root, 50); 
	root = insert(root, 25); 
	
	/* The constructed AVL Tree would be 
			30 
			/ \ 
		  20    40 
		/   \    \ 
		10  25    50 
	*/
	cout << "Preorder traversal of the "
			"constructed AVL tree is \n"; 
	preOrder(root); 
	
	return 0; 
} 