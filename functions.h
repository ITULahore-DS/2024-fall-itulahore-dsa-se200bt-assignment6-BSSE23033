#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Node{
private:
    int data;
    Node *next_node;

public:
    Node(int data = 0) {   //constructor
        this->data = data;
        next_node = nullptr;
    }

    void setNode(Node *nextNode);   //setter
    Node *getNext();   //getter
    void setData(int value);  //setter
    int getData();  //getter

    ~Node(){
    }

};


class Stack{
private:
    Node *top;
    int count;

public:
    Stack(){    // constructor
        top = nullptr;
        count = 0;
    }

    bool isEmpty();  // to check if array is empty 
    void push(int data); // to prepend
    void pop(); // to remove from start
    int peek(); // what is present at top
    int size(); // getter
    void clear();  // to clear stack
    void printStack(); // display

    ~Stack(){ // destructor
        Node* current = top;
        while (current != NULL) {
            Node* nextNode = current->getNext();
            delete current;
            current = nextNode;
        }
        top = NULL;
    }
};

class Queue{
private:
    Node *top;
    Node *end;
    int count;

public:

    Queue() {  // constructor
        count = 0;
        top = nullptr;
        end = nullptr;
    }

    bool isEmpty();  // to check if array is empty
    void enqueue(int data); // to append
    void dequeue();    // to remove from start
    int size();    // getter
    Node *getTop();  //get Top
    Node *getEnd();  //Get end
    void printQueue(); // display
    int peek();  // for getting top Data
    
 
    ~Queue() {   //destructor
        Node* current = top;
        while (current != NULL) {
            Node* nextNode = current->getNext();
            delete current;
            current = nextNode;
        }
        top = NULL;
    }
};

#endif
