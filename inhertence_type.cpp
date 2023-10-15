#include<bits/stdc++.h>
using namespace std;
class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
class parent2{
public:
    parent2(){
        cout<<"parent2 class"<<endl;
    }
};
class child: public parent, public parent2{
public:
    child(){
        cout<<"child class"<<endl;
    }
};
class grandchild: public child{
public:
    grandchild(){
        cout<<"grandchild class"<<endl;
    }
};
int main(){

    child c;

    return 0;
}