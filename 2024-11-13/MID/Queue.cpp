#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(NULL), rear(NULL) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == NULL;
    }

    // Function to enqueue (add) an element to the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == NULL) {
            front = rear = newNode; // Queue was empty
        } else {
            rear->next = newNode; // Link the new node at the end
            rear = newNode;       // Update the rear pointer
        }
        cout << "Enqueued " << value << " to the queue.\n";
    }

    // Function to dequeue (remove) an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! No elements to dequeue.\n";
            return;
        }
        Node* tempNode = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL; // Queue is empty after dequeuing
        }
        cout << "Dequeued " << tempNode->data << " from the queue.\n";
        delete tempNode;
    }

    // Function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return -1; // Return -1 or any invalid value to indicate an empty queue
        }
        return front->data;
    }

    // Function to display the elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        Node* currentNode = front;
        cout << "Queue elements:\n";
        while (currentNode != NULL) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
};

int main() {
    Queue queue;
    int choice, value;

    while (true) {
        cout << "\nQueue Operations\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            value = queue.peek();
            if (value != -1)
                cout << "Front element is: " << value << endl;
            break;
        case 4:
            queue.display();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

