#include<bits/stdc++.h>
using namespace std;

class complex1{
public:
    int real;
    int img;
    complex1(int x, int y){
        real=x;
        img=y;
    }
    complex1 operator +(complex1 &c){
        complex1 ans(0,0);
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
    complex1 operator *(complex1 &c){
        complex1 ans(0,0);
        ans.real=(real* c.real)-(img* c.img);
        ans.img=(real *c.img)+(img*c.real);
        return ans;
    }
};
class parent{
public:
    virtual void print(){
        cout<<"Parent class"<<endl;
    }
    void show(){
        cout<<"parent class"<<endl;
    }
};
class child:public parent{
public:
    void print(){
        cout<<"Child class"<<endl;
    }
    void show(){
        cout<<"child class"<<endl;
    }   
};
int main(){
    // complex1 c1(1,2);
    // complex1 c2(1,3);
    // complex1 c3=c1+c2;
    // cout<<c3.real<<" i"<<c3.img<<endl;
    parent *p;
    child c;
    p=&c;
    p->print();
    p->show();
    return 0;
}