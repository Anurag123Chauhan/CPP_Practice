#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^'); 
}

int priority(char c){
    if(c=='^')return 3;
    else if(c=='*'||c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    return 0;
}

string infix_to_postfix(const string & infix){
    string postfix;
    stack<char>op;
    for(char c:infix){
        if(isalpha(c) || isdigit(c)){
            postfix+=c;
        }
        else if(c=='('){
            op.push(c);
        }
        else if(c==')'){
            while(!op.empty() && op.top()!='('){
                postfix+=op.top();
                op.pop();
            }
            if(!op.empty() && op.top()=='('){
                op.pop();
            }
        }
        else if(isOperator(c)){
            while(!op.empty() && priority(op.top())>=priority(c)){
                postfix+=op.top();
                op.pop();
            }
            op.push(c);
        }
    }
    while (!op.empty()){
        postfix+=op.top();
        op.pop();
    }
    return postfix;
}

int main(){
    string str;
    getline(cin,str);
    string ans=infix_to_postfix(str);
    cout<<ans;

    return 0;
}