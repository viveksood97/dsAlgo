#include "../include/linked_list.h"

Node::Node(int value) 
{
    data = value;
    next = NULL;
}

void printLinkedList(Node* n) {
    while(n != NULL) {
        std::cout << n->data << " -> ";
        n = n->next;
    }
    std::cout << "NULL" << std::endl;
}

void insertAtFront(Node*& head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    first->next = second;

    Node* third = new Node(30);
    second->next = third;

    insertAtFront(first, 5);

    printLinkedList(first);
}