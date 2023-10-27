// // You are using GCC
// #include <bits/stdc++.h>

// #define MAX_Char_LENGTH 30 

// using namespace std;

// void mergeA(char arr[][MAX_Char_LENGTH], int left, int mid, int right)
// {
//     int n1=mid-left+1;
//     int n2=right-mid;
    
//     char arr1[n1][MAX_Char_LENGTH];
//     char arr2[n2][MAX_Char_LENGTH];
    
//     for(int i=0;i<n1;i++){
//         strcpy(arr1[i],arr[left+1]);
//     }
//     for(int j=0;j<n2;j++){
//         strcpy(arr2[j],arr[mid+1+j]);
//     }
//     int i=0;
//     int j=0;
//     int k=left;
//     while(i<n1&&j<n2){
//         if(strcmp(arr1[i],arr2[j])<=0){
//             strcpy(arr[k],arr1[i]);
//             i++;
//         }
//         else{
//             strcpy(arr[k],arr2[j]);
//             j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         strcpy(arr[k],arr1[i]);
//         i++;
//         k++;
//     }
//     while(j<n2){
//         strcpy(arr[k],arr2[j]);
//         j++;
//         k++;
//     }
// }

// void mergeSort(char arr[][MAX_Char_LENGTH], int left, int right)
// {
//    if(left<right){
//        int mid=left+(right-left)/2;
//        mergeSort(arr,left,mid);
//        mergeSort(arr,mid+1,right);
//        mergeA(arr,left,mid,right);
//     }
// }

// int main() {
//     int size;
//     cin >> size;

//     char arr[size][MAX_Char_LENGTH];
    
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     mergeSort(arr, 0, size - 1);

//     cout << "Sorted Characters: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i][0] << " ";
//     }
//     cout << "\n";

//     return 0;
// }
// BST questions
// #include <bits/stdc++.h>

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
// };

// int kthLargest(TreeNode* root, int k) {
//     int count = 0;
//     int kthLargest = -1;

//     // Perform a reverse in-order traversal to find the kth largest element
//     std::function<void(TreeNode*)> reverseInOrder = [&](TreeNode* node) {
//         if (node == nullptr || count >= k) {
//             return;
//         }

//         // Traverse the right subtree
//         reverseInOrder(node->right);

//         // Check if we've found the kth largest element
//         if (++count == k) {
//             kthLargest = node->val;
//             return;
//         }

//         // Traverse the left subtree
//         reverseInOrder(node->left);
//     };

//     reverseInOrder(root);
//     return kthLargest;
// }

// TreeNode* buildBST() {
//     int val;
//     TreeNode* root = nullptr;

//     while (true) {
//         std::cin >> val;

//         if (val == -1) {
//             break;
//         }

//         if (root == nullptr) {
//             root = new TreeNode(val);
//         } else {
//             // Insert the value into the BST
//             TreeNode* current = root;
//             while (true) {
//                 if (val < current->val) {
//                     if (current->left == nullptr) {
//                         current->left = new TreeNode(val);
//                         break;
//                     }
//                     current = current->left;
//                 } else {
//                     if (current->right == nullptr) {
//                         current->right = new TreeNode(val);
//                         break;
//                     }
//                     current = current->right;
//                 }
//             }
//         }
//     }

//     return root;
// }

// int main() {
//     TreeNode* root = buildBST();

//     int k;
//     std::cin >> k;

//     int kth_largest = kthLargest(root, k);
//     std::cout << kth_largest;

//     // Delete the dynamically allocated tree nodes
//     // Implement a separate function to free the memory if needed
//     delete root;

//     return 0;
// }
// question2
