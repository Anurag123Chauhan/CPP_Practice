#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int temp[high];
    int left=low;
    int right=mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]);
    }

}
void mergesort(int arr[],int low,int high){
    if(low>high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){

    int arr[7]={10,2,45,22,5,12,33};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}