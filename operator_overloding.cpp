// #include<bits/stdc++.h>
// using namespace std;

// class complex1{
// public:
//     int real;
//     int img;
//     complex1(int x, int y){
//         real=x;
//         img=y;
//     }
//     complex1 operator +(complex1 &c){
//         complex1 ans(0,0);
//         ans.real=real+c.real;
//         ans.img=img+c.img;
//         return ans;
//     }
//     complex1 operator *(complex1 &c){
//         complex1 ans(0,0);
//         ans.real=(real* c.real)-(img* c.img);
//         ans.img=(real *c.img)+(img*c.real);
//         return ans;
//     }
// };
// class parent{
// public:
//     virtual void print(){
//         cout<<"Parent class"<<endl;
//     }
//     void show(){
//         cout<<"parent class"<<endl;
//     }
// };
// class child:public parent{
// public:
//     void print(){
//         cout<<"Child class"<<endl;
//     }
//     void show(){
//         cout<<"child class"<<endl;
//     }   
// };
// int main(){
//     // complex1 c1(1,2);
//     // complex1 c2(1,3);
//     // complex1 c3=c1+c2;
//     // cout<<c3.real<<" i"<<c3.img<<endl;
//     parent *p;
//     child c;
//     p=&c;
//     p->print();
//     p->show();
//     return 0;
// }
#include <iostream>
#include <cstring>

class CustomString {
private:
    char* str;

public:
    CustomString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    ~CustomString() {
        delete[] str;
    }

    CustomString operator!() {
        char* invertedStr = new char[strlen(str) + 1];
        for (int i = 0; i < strlen(str); i++) {
            if (islower(str[i])) {
                invertedStr[i] = toupper(str[i]);
            } else if (isupper(str[i])) {
                invertedStr[i] = tolower(str[i]);
            } else {
                invertedStr[i] = str[i];
            }
        }
        invertedStr[strlen(str)] = '\0';
        return CustomString(invertedStr);
    }

    friend std::ostream& operator<<(std::ostream& os, const CustomString& cs) {
        os << cs.str;
        return os;
    }
};

int main() {
    char input[101];
    std::cin.getline(input, sizeof(input));
    CustomString obj(input);
    std::cout << "Original String: " << obj << std::endl;
    std::cout << "Inverted String: " << !obj << std::endl;
    return 0;
}
