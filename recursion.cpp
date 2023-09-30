#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
int print(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<endl;
        return print(n-1);
    }
}
void printIncreasing(int n) {
    if (n == 1) {
        cout << 1 << " ";
        return;
    }
    printIncreasing(n-1);
    cout << n << " ";
}
long long pow(int n,int p){
    if(p==0){
        return 1;
    }
    else if(p==1){
        return n;
    }
    else{
        return n*pow(n,p-1);
    }
    // long long prev=pow(n,p-1);
    // return n*prev;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1||n==2){

        return 1;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){

    int n,p;
    cin>>n;
    // int s=sum(n);
    // int s=print(n);
    // printIncreasing(n);
    // long long s=pow(n,p);
    int s=fibo(n);
    cout<<s<<endl;
    return 0;
}