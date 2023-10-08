#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    // base case
    if(n==1){
        return true;
    }
    // termination condition
    if(arr[0]>arr[1])return false;
    // recursive iteration[it is reducing the size of arr]
    // Recursively check the rest of the array.
    return sorted(arr+1,n-1);
    
}
void dec(int n){
    if(n==1){
        cout<< 1 <<endl;
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<< 1 <<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
void f_and_l(int arr[],int n,int target,int &first,int &last){
    first = -1;
    last = -1;

    // Base case: Array has only one element.
    if (n == 1) {
        if (arr[0] == target) {
            first = 0;
            last = 0;
        }
        return;
    }

    // Recursive case
    f_and_l(arr + 1, n - 1, target,first,last);

    // Update first and last based on the result of the recursive call.
    if (arr[0] == target) {
        if (first == -1) {
            // If first is not set, this is the first occurrence.
            first = n - 1;
        }
        // Update last with the current index.
        last = n - 1;
    }
}
int main(){

    int arr[]={1,2,3,5,1,1};
    int s = sizeof(arr)/sizeof(arr[1]);
    // bool ans=sorted(arr,s);
    // cout<<ans;
    // int n;cin>>n;
    // dec(n);
    // inc(n);
    int first,last;
    f_and_l(arr,s,1,first,last);
    cout<<first<<endl;
    cout<<last<<endl;
    return 0;
}