//
//  main.cpp
//  linked_list
//
//  Created by Sagar  Bhowmik on 9/10/18.
//  Copyright © 2018 Sagar  Bhowmik. All rights reserved.
//


// A complete working C program to demonstrate all insertion methods
// on Linked List
#include <iostream>
using namespace std;

// A linked list node
class Node {
public:
    Node* next;
    int data;
};

class LinkedList {
public:
    int length;
    Node* head;
    
    LinkedList();
    ~LinkedList();
    void add(int data);
    void print();
};

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    cout << "LIST DELETED" << endl;
}

void LinkedList::add(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void LinkedList::print() {
    Node *current = this->head;
    int i = 1;
    while (current) {
        cout << i << ": " << current->data << endl;
        current = current->next;
        i++;
    }
}

int main(int argc, char const *argv[])
{
    LinkedList* list = new LinkedList();
    for (int i = 0; i < 100; ++i)
    {
        list->add(rand() % 100);
    }
    list->print();
    std::cout << "List Length: " << list->length << std::endl;
    delete list;
    return 0;
}
