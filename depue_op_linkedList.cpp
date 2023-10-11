#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class Deque{
    public:
    Node *head;
    Node *tail;
    Deque(){
        head=tail=NULL;
    }
    void push_back(int val){
        Node *n=new Node(val);
        if(head==NULL){
            head=tail=n;
        }
        tail->next=n;
        n->prev=tail;
        tail=n;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=tail;
        tail=tail->prev;
        delete temp;
    }
    void push_front(int val){
        Node *n=new Node(val);
        if(head==NULL){
            head=tail=n;
            return;
        }
        n->next=head;
        // head->prev=n;
        head=n;
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        head = temp->next;
        if(head!=NULL){
            head -> prev = NULL;
        }
        delete temp;
    }
    void front(){
        cout<<head->data<<" "<<endl;
    }
    void back(){
        cout<<tail->data<<" "<<endl;
    }
};

int main(){
    Deque lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.pop_back();
    lst.push_front(20);
    lst.push_front(40);
    lst.pop_front();
    lst.front();
    lst.back();
}