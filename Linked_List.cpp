#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Linked_lst{
    public:
    Node *head;
    Node *tail;
    Linked_lst(){
        head=NULL;
        tail=NULL;
    }
    void push_end(int ele){
        Node *n=new Node(ele);
        if(head==NULL){
            head=tail=n;
            return;
        }
        tail->next=n;
        tail=n;
    }
    void push_front(int ele){
        Node *n=new Node(ele);
        if(head==NULL){
            head=tail=n;
            return;
        }
        n->next=head;
        head=n;
    }
    void pop_front(){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head==tail){
            head=tail=NULL;
            return ;
        }
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    void pop_back(){
        if(tail==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head==tail){
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        while(temp!=tail){
            temp=temp->next;
        }
        Node * temp2=temp->next;
        temp->next=NULL;
        delete temp2;
    }

    void dispaly(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }   
        cout<<endl;
    }

};
int main(){

    Linked_lst lst;
    lst.push_end(10);
    lst.push_end(20);
    lst.push_end(30);

    lst.dispaly();
    lst.pop_front();
    lst.push_front(50);
    lst.pop_back();

    lst.dispaly();

    return 0;
}