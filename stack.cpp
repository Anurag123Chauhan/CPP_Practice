// Question -1 > Parenthesis Matching
// #include<bits/stdc++.h>
// using namespace std;
// int priority(char &c){
//     if(c=='['||c==']')return 1;
//     else if (c=='{' ||c=='}')return 2;
//     else if (c=='(' ||c==')')return 3;
//     else if (c=='<' ||c=='>')return 4;
//     else return 0;
// }

// int main(){
//     string s;
//     cin>>s;
//     stack<char>st;
//     stringstream ss(s);
//     char c;
//     while(ss >> c){
//         if(st.empty()){
//             st.push(c);
//         }
//         else if(!st.empty()&&priority(st.top())!=priority(c)){
//             st.push(c);
//         }
//         else if (!st.empty()&&priority(st.top())==priority(c))
//         {
//             st.pop();
//             // continue;
//         }
//     } 
//     if(!st.empty()){
//         cout<<"NO"<<endl;
//     }
//     else {
//         cout<<"yes"<<endl;
//     }
//     return 0;
// }
// Question -2> Evaluate Postfix Expression
