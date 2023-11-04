#include<bits/stdc++.h>
using namespace std;


// void heapify(vector<int>&v,int n,int idx){
//     int lc = -1;
//     int rc = -1;

//     if(idx*2+1<n){
//         lc=v[idx*2+1];
//     }

//     if(idx*2+2<n){
//         rc=v[idx*2+2];
//     }

//     int m=max(lc,rc);

//     if(m>v[idx]){
//         if(m==v[2*idx+1]){
//             swap(v[idx],v[2*idx+1]);
//             heapify(v,n,2*idx+1);
//         }
//         else{
//             swap(v[idx],v[2*idx+2]);
//             heapify(v,n,2*idx+2);
//         }
//     }
// }

void heapify(vector<int>&v,int n,int idx){
    int s=idx;
    int lc=2*idx+1;
    int rc=2*idx+2;

    if(lc<n && v[lc]>v[s]){
        s=lc;
    }
    if(rc<n && v[rc]>v[s]){
        s=rc;
    }

    if(s!=idx){
        swap(v[s],v[idx]);
        heapify(v,n,s);
    }
}

void min_heapify(vector<int>&v,int n, int idx){
    int s=idx;
    int lc=idx*2 +1;
    int rc=idx*2 +2;

    if(lc<n && v[lc]<v[s])
        s=lc;
    if(rc<n && v[rc]<v[s])
        s=rc;

    if(s!=idx){
        swap(v[idx],v[s]);
        min_heapify(v,n,s);
    }
}
void del(vector<int>&v,int &s){
    int last=v[s-1];
    v[0]=last;
    s=s-1;
    heapify(v,s,0);
}
void heapSort(vector<int> arr, int n){
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call min heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main(){

    vector<int> v={5,4,2,3,9,8,7};

    int n=v.size();
    for(int i=n/2-1;i>=0;i--){
        min_heapify(v,n,i);
    }
    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}