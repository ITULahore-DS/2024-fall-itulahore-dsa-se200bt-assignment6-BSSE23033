#include <iostream>
#include "functions.h"
using namespace std;

void Node :: setNode(Node *nextNode) {   //setter
        next_node = nextNode;
}

Node *Node :: getNext() {  //getter
    return next_node;
}

void Node :: setData(int value) {  //getter
    data = value;
}

int Node :: getData() {  //getter
    return data;
}

bool Stack :: isEmpty() {    // to check if array is empty 
    if (top == nullptr && count == 0) {
        return true;
    }
    else {
        return false;
    }
}

void Stack :: push(int data) {   // to prepend
    Node *temp = new Node(data);
    if (top == nullptr) {
        top = temp;
        top->setNode(nullptr);
    }
    else{
        temp->setNode(top);
        top = temp;
    }
    count ++;
}

void Stack :: pop() {          // to remove from start
    if (top == nullptr && count == 0) {
        cout << "Stack is Empty so can't pop" << endl;
        return;
    }
    Node * temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Stack :: peek() {   //return top data
    if (top == nullptr && count == 0) {
        cout << "Stack is Empty so Top is empty" << endl;
        return -1;
    }
    cout << "Top data is: " << top->getData() << endl;
    return top->getData();
}

int Stack :: size() {  //getter
    return count;
}

void Stack :: clear() {  // to clear stack
    if (top == nullptr && count == 0) {
        cout << "Stack is already empty can't clear" << endl;
        return;
    }    
    while (isEmpty() != true) {
        pop();
    }
    cout << "Stack Cleared!" << endl;
}

void Stack :: printStack() {  //display
    if (top == nullptr && count == 0) {
        cout << "Stack is empty Can't Print anything" << endl;
        return;
    }
    
    Node * temp = top;
    for (int i =  0 ; i < count; i++) {
        cout << "Index " << i << " " << temp->getData() << " " << "Address of Node: " << temp << endl;
        temp = temp->getNext();
    }
}

bool Queue :: isEmpty() {  // to check if array is empty 
    if (top == nullptr && count == 0) {
        return true;
    }
    else {
        return false;
    }
}

void Queue :: enqueue(int data) { // to append
    Node *temp = new Node(data);
    if (top == nullptr && count == 0) {
        top = temp;
        end = temp;
    }
    else{
        end->setNode(temp);
        end = temp;
    }
    count ++;
}
 
void Queue :: dequeue() {  // to remove from top
    if (top == nullptr && count == 0) {
        cout << "Queue is Empty so Can't dequeue" << endl;
        return;
    }
    else if(top == end){
        top = nullptr;
        end = nullptr;
        count--;
        return;
    }
    else{
        Node * temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }

}

int Queue :: size() {  // getter
    return count;
}

Node *Queue :: getTop() {  //getter
    return top;
}

Node *Queue :: getEnd() {  //getter
    return end;
}

void Queue :: printQueue() { // display
    if (top == nullptr && count == 0) {
        cout << "Queue is empty so can't print anything" << endl;
        return;
    }
    Node *temp = top;
    for (int i =  0 ; i < count; i++) {
        cout << "Index " << i << " " << temp->getData() << " " << "Address of Node: " << temp << endl;
        temp = temp->getNext();
    }
}

int Queue::peek() {
    if(top == nullptr){
        return -1;
    }
    
    return top->getData();
}
