#include <iostream>
#include "functions.h"
using namespace std;

void menu1(){
    Stack arr;
    int num = 0;
    while (num != 5){
        cout << "1. For Push" << endl;
        cout << "2. For Pop" << endl;
        cout << "3. For clear " << endl;
        cout << "4. For Display" << endl;
        cout << "5. To Exit" << endl;
        cout << "Enter Choice: ";
        cin >> num;
        if (num==1) {    //1.For Push
            int num1, num2;
            cout << "Enter data: " << endl;
            cin >> num1;
            arr.push(num1);
            arr.printStack();
        }
        else if (num == 2) {  //2. For Pop
            arr.pop();
            arr.printStack();
        }
        else if (num == 3) {   //3. For clear
            arr.clear();
        }
        else if (num == 4) {   //4. For Display
            arr.printStack();

        }
    }
}

void menu2(){
    Queue arr;
    int num = 0;
    while (num != 4){
        cout << "1. For EnQueue" << endl;
        cout << "2. For Dequeue" << endl;
        cout << "3. For Display" << endl;
        cout << "4. To Exit" << endl;
        cout << "Enter Choice: ";
        cin >> num;
        if (num==1) {    //1.For    Queue
            int num1, num2;
            cout << "Enter data: " << endl;
            cin >> num1;
            arr.enqueue(num1);
            arr.printQueue();
        }
        else if (num == 2) {  //2. For Dequeue
            arr.dequeue();
            arr.printQueue();
        }
        else if (num == 3) {   //3. For Display
            arr.printQueue();

        }
    }
}

int main() {
    cout << "Welcome to Assignemnt 6 " << endl;
    int num;
    
    while (num !=3){
    cout << "Enter 1 for Stack and 2 for Queue or 3 for Exit: " << endl;
    cin >> num;
        if (num == 1) {
            menu1();
        }
        else if (num == 2) {
            menu2();
        }
    }
    return 0;
}