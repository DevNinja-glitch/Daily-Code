#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(NULL) {}

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << value << " onto the stack.\n";
    }

    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! No elements to pop.\n";
            return;
        }
        Node* tempNode = top;
        top = top->next;
        cout << "Popped " << tempNode->data << " from the stack.\n";
        delete tempNode;
    }

    // Function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1; // Return -1 or any invalid value to indicate an empty stack
        }
        return top->data;
    }

    // Function to display the elements in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        Node* currentNode = top;
        cout << "Stack elements:\n";
        while (currentNode != NULL) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\nStack Operations\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            value = stack.peek();
            if (value != -1)
                cout << "Top element is: " << value << endl;
            break;
        case 4:
            stack.display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

