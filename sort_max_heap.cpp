#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&v,int n,int idx){
    int lc=-1;
    int rc=-1;

    if(idx*2 +1<n){
        lc=v[idx*2+1];
    }
    if(idx*2 +2<n){
        rc=v[idx*2+2];
    }
    int m=max(lc,rc);

    if(m>v[idx]){
        if(m==v[idx*2 +1]){
            swap(v[idx],v[idx*2+1]);
            heapify(v,n,idx*2+1);
        }
        else{
            swap(v[idx],v[idx*2+2]);
            heapify(v,n,idx*2+2);
        }
    }
}
void min_heapify(vector<int>& v, int n, int idx) {
    int s = idx; 
    int lc = 2 * idx + 1;
    int rc = 2 * idx + 2;
    if (lc < n && v[lc] < v[s]) {
        s = lc;
    }
    if (rc < n && v[rc] < v[s]) {
        s = rc;
    }
    if (s != idx) {
        swap(v[idx], v[s]);
        min_heapify(v, n, s);
    }
}
int main(){
    
    vector<int>v={5,4,2,3,9,8,7};
    int n=v.size();

    for(int i=n/2 +1;i>=0;i--){
        min_heapify(v,n,i);
    }
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}