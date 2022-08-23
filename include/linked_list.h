#include <iostream>

struct Node {
    public:
        int data;
        Node* next;
        Node(int value);

        ~Node();
};

void printLinkedList(Node* n);

void insertAtFront(Node*& head, int value);