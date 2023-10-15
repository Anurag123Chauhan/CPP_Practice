#include<bits/stdc++.h>
using namespace std;
// Encapsulation: Binding of methods and variables together into 
// a single unit [class].
// ->data is only accessible from the class method
// ->data hiding ,Abstract data type(ADT). 
// -> Use getter and setter method to acces in mai function

class rec{
    public:
        int l;
        int b;
        rec(){  //Default constructor
            this->l=0;
            this->b=0;
        }
        rec(int l,int b){ //parametrized constructor
            this->b=b;
            this->l=l;
        }
        rec(rec& r){ //copy constructor
            l=r.l;
            b=r.b;
        }
        ~rec(){ //destructror
            cout<<"Destructor is called"<<endl;
        }
};
class parent{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};
class child1: public parent{
    // x will remain public
    // y will remain procted
    // z will not be accessible
};
class child2: private parent{
    // x = private;
    // y private
    // z not accessible
};
class child3: protected parent{
    // x protected
    // y protected
    // z not accessible
};

int main(){

    // rec* r1=new rec();
    // cout<<r1->l<<" "<<r1->b<<endl;
    // delete r1;
    // rec r2(3,2);
    // cout<<r2.l<<" "<<r2.b<<endl;
    // rec r3(r2);
    // cout<<r3.l<<" "<<r3.b<<endl;
    parent p;
    p.x;
    return 0;
}