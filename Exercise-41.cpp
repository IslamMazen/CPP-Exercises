#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


class Stack {
private:
    Node* top;

public:

    Stack() : top(nullptr) {}


    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }


    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }


    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }


    bool isEmpty() const {
        return top == nullptr;
    }


    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1;

            return top->data;
        }
    };


    int main() {
        Stack stack;

        stack.push(10);
        stack.push(20);
        stack.push(30);
    }
