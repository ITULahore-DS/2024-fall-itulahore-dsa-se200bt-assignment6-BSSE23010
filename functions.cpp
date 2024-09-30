//
// Created by Hp on 9/28/2024.
//

#include "functions.h"

//-----------------------------Node Class implementation-----------------------
Node::Node(int data) {
    this->data = data;
    next = nullptr;
}

Node::~Node() {


}

void Node::setNext(Node *nextNode) {
    next = nextNode;
}

void Node::setData(int dataValue) {
    this->data = dataValue;
}

int Node::getData() {
    return data;
}

Node *Node::getNext() {
    return next;
}

//-------------------------------------------Stack---------------------------

Stack::Stack() {
    top = nullptr;
    count = 0;
}

Stack::~Stack() {

}

bool Stack::isEmpty() {
    if (count == 0) {               // check for empty stack
        cout << "Stack is Empty" << endl;
        return true;
    }
    return false;
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    cout << count << endl;
    int n = count;
    for (int i = 0; i <= n; ++i) {          // clearing the stack by pop each element
        pop();
    }
}

void Stack::printStack() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    } else {
        Node *temp = top;
        while (temp != nullptr) {           // printing the stack
            cout << temp->getData() << " ";
            temp = temp->getNext();
        }
    }
    cout << endl;
}

void Stack::push(int data) {            // push element into the stack
    Node *newNode = new Node(data);
    if (count == 0) {
        top = newNode;
    } else {
        newNode->setNext(top);
        top = newNode;
    }
    count++;
}

void Stack::pop() {
    if (isEmpty()) {
        return;
    } else {            // pop element from stack
        top = top->getNext();
        count--;
    }
}

int Stack::peek() {
    if (isEmpty()) {
        return -1;                  // get peek element from stack
    } else
        return top->getData();
}


//------------------------------------------Queue-------------------------------
Queue::Queue() {
    top = nullptr;
    rear = nullptr;
    count = 0;
}

Queue::~Queue() {

}

bool Queue::isEmpty() {
    if (count == 0) {
        cout << "Array is empty" << endl;
        return true;
    }
    return false;
}

int Queue::size() {
    return count;
}

void Queue::enqueue(int data) {
    Node *newNode = new Node(data);
    if (isEmpty()) {
        top = newNode;
        rear = newNode;

    } else {
//        Node *temp = top;
//        while (temp->getNext() != nullptr) {
//            temp = temp->getNext();
//        }
//        temp->setNext(newNode);
        top->setNext(newNode);
        top = newNode;

    }
    count++;
}

void Queue::printQueue() {
    cout << "Print " << endl;
    if (isEmpty()) {
        return;
    } else {
        Node *temp = rear;
        while (temp != nullptr) {
            cout << temp->getData() << " ";
            temp = temp->getNext();
            cout << endl;
        }
    }
}

void Queue::dequeue() {
    if (isEmpty()) {
        return;
    } else {
//        top = top->getNext();
        Node *temp = rear->getNext();
        rear = temp;
        count--;
    }
}

int Queue::peek() {
    if (isEmpty()) {
        return -1;
    } else {
        return rear->getData();
    }
}