// #include<bits/stdc++.h>
// using namespace std;

// bool isOperator(char c){
//     return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^'); 
// }

// int priority(char c){
//     if(c=='^')return 3;
//     else if(c=='*'||c=='/')return 2;
//     else if(c=='+' || c=='-')return 1;
//     return 0;
// }

// string infix_to_postfix(const string & infix){
//     string postfix;
//     stack<char>op;
//     for(char c:infix){
//         if(isalpha(c) || isdigit(c)){
//             postfix+=c;
//         }
//         else if(c=='('){
//             op.push(c);
//         }
//         else if(c==')'){
//             while(!op.empty() && op.top()!='('){
//                 postfix+=op.top();
//                 op.pop();
//             }
//             if(!op.empty() && op.top()=='('){
//                 op.pop();
//             }
//         }
//         else if(isOperator(c)){
//             while(!op.empty() && priority(op.top())>=priority(c)){
//                 postfix+=op.top();
//                 op.pop();
//             }
//             op.push(c);
//         }
//     }
//     while (!op.empty()){
//         postfix+=op.top();
//         op.pop();
//     }
//     return postfix;
// }

// int main(){
//     string str;
//     getline(cin,str);
//     string ans=infix_to_postfix(str);
//     cout<<ans;

//     return 0;
// }
// Evaluate postfix
#include <bits/stdc++.h>
using namespace std;

bool isOperator(const string& token) {
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

int evaluatePostfix(const string& expression) {
    stack<int> operandStack;

    stringstream iss(expression);
    string token;

    while (iss >> token) {
        if (!isOperator(token)) {
            operandStack.push(stoi(token));
        } 
        else {
            if (operandStack.size() < 2) {
                cerr << "Error: Insufficient operands for operator " << token << endl;
                return 0;
            }

            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            if (token == "+") {
                result = operand1 + operand2;
            }
            else if (token == "-") {
                result = operand1 - operand2;
            }
            else if (token == "*") {
                result = operand1 * operand2;
            } 
            else if (token == "/") {
                if (operand2 == 0) {
                    cerr << "Error: Division by zero" << endl;
                    return 0;
                }
                result = operand1 / operand2;
            }
            operandStack.push(result);
        }
    }

    if (operandStack.size() == 1) {
        return operandStack.top();
    } else {
        cerr << "Error: Invalid expression" << endl;
        return 0;
    }
}
int main() {
    string expression;
    getline(cin, expression);

    int result = evaluatePostfix(expression);
    cout << result << endl;

    return 0;
}