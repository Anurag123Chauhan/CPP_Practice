#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node() {
        cout << "Node destructor: " << data << endl;
    }
};

class Linked_lst {
public:
    Node* head, *tail, *prev;

    Linked_lst() {
        head = tail = prev = NULL;
    }

    void insert_back(int ele) {
        Node* n = new Node(ele);
        if (head == NULL) {
            head = tail = n;
            return;
        }
        tail->next = n;
        n->prev = tail;
        tail = n;
    }

    void insert_head(int ele) {
        Node* n = new Node(ele);
        if (head == NULL) {
            head = tail = n;
            return;
        }
        n->next = head;
        head->prev = n;
        head = n;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        delete temp;
    }

    void pop_head() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linked_lst myList;

    myList.insert_back(1);
    myList.insert_back(2);
    myList.insert_back(3);
    myList.display();

    myList.insert_head(0);
    myList.display();

    myList.pop_back();
    myList.display();

    myList.pop_head();
    myList.display();

    return 0;
}