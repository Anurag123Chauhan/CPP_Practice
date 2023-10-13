// // only code
// void swap(Node* a, Node* b) {
//     int temp = a->data;
//     a->data = b->data;
//     b->data = temp;
// }
// void bst(node *head){
//     Node *i;*j;
//     i=head;
//     for(i=head ; !i;i=i->next){
//         for(j=i->next; !j;j=j->next){
//             if(i->data > j->data){
//                 swap(i,j);
//             }
//         }
//     }
// }
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void swap(Node* a, Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void bubbleSort(Node* head) {
    Node* i;
    Node* j;

    for (i = head; i != nullptr; i = i->next) {
        for (j = i->next; j != nullptr; j = j->next) {
            if (i->data > j->data) {
                swap(i, j);
            }
        }
    }
}

void printList(Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    Node* head = new Node(3);
    head->next = new Node(1);
    head->next->next = new Node(4);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(5);

    std::cout << "Original List: ";
    printList(head);

    // Example of using the bubbleSort function
    bubbleSort(head);

    std::cout << "List after Bubble Sort: ";
    printList(head);

    // Don't forget to deallocate memory to prevent memory leaks
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
