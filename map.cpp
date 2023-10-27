// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // unordered_map<string,int>dict;
//     map<string,int>dict;

//     dict.insert(pair<string,int>("Anurag",10));
//     dict.insert(pair<string,int>("Sumit",100));
//     dict.insert(pair<string,int>("Harsh",100000));
//     dict["Anurag"]=100000000;
//     dict.clear();
//     cout<<dict.size()<<endl;
//     for(auto pair:dict){
//         cout<<pair.first<<" - "<<pair.second<<endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,list<string>>poki;
    list<string>pikachuattacks{"thunder shock"};
    list<string>charmenderattacks{"scary face"};
    list<string>chikoritaattacks{"razor leaf"};

    poki.insert(pair<string,list<string>>("Pikachu",pikachuattacks));
    poki.insert(pair<string,list<string>>("Charmender",charmenderattacks));
    poki.insert(pair<string,list<string>>("Chikorita",chikoritaattacks));

    for(auto pair:poki){
        cout<<pair.first<<" - ";
        for(auto attack : pair.second)
            cout<< attack <<", ";
        cout<<endl;
    }  

    return 0;
}
