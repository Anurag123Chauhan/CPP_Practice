// // learn pairs 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     pair<int,string>pair1;

//     pair1.first=10;
//     pair1.second="ten";
//     cout<<"pair 1 : ";
//     cout<<pair1.first<<" ";
//     cout<<pair1.second<<endl;

//     pair<int,string> PAIR2(100,"hanji");
//     cout<<"pair 2 : ";
//     cout << PAIR2.first << " ";
//     cout << PAIR2.second << endl;

//     pair1.swap(PAIR2);
//     cout<<"After swap:"<<endl;
//     cout<<"pair 1 : ";
//     cout<<pair1.first<<" ";
//     cout<<pair1.second<<endl;
//     cout<<"pair 2 : ";
//     cout << PAIR2.first << " ";
//     cout << PAIR2.second << endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int,int>pair1={1,2};
    int a,b;
    tie(a,b)=pair1;
    cout<<a<<" "<<b<<endl;
    pair<int,int>pair2={3,4};
    tie(a,ignore)=pair2;
    cout<<a<<" "<<b<<endl;

    pair<int,pair<int,char>>pair3={3,{4,'a'}};
    int x,y;
    char z;
    tie(x,ignore) = pair3;
    tie(y, z) = pair3.second;
    cout << x << " " << y << " " << z << "\n";
    return 0;
}