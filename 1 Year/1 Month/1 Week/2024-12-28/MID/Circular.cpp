#include <iostream>
using namespace std;

class Node {
private:
    string name;
    Node *next;
    Node *prev;

public:
    Node() : name(""), next(NULL), prev(NULL) {}

    void setName(string name) { this->name = name; }
    void setNext(Node *next) { this->next = next; }
    void setPrev(Node *prev) { this->prev = prev; }
    string getName() { return name; }
    Node *getNext() { return next; }
    Node *getPrev() { return prev; }
};

class CircularDoublyLinkedList {
private:
    Node *headNode;
    Node *tailNode;
    int size;

public:
    CircularDoublyLinkedList() : headNode(NULL), tailNode(NULL), size(0) {}

    void append(string name) {
        Node *newNode = new Node();
        newNode->setName(name);

        if (headNode == NULL) {
            headNode = newNode;
            tailNode = newNode;
            newNode->setNext(newNode);
            newNode->setPrev(newNode);
        } else {
            tailNode->setNext(newNode);
            newNode->setPrev(tailNode);
            newNode->setNext(headNode);
            headNode->setPrev(newNode);
            tailNode = newNode;
        }
        size++;
    }

    void insert(string name, int position) {
        if (position < 0 || position > size) {
            cout << "Position out of bounds.\n";
            return;
        }

        Node *newNode = new Node();
        newNode->setName(name);

        if (position == 0) {
            if (headNode == NULL) {
                headNode = newNode;
                tailNode = newNode;
                newNode->setNext(newNode);
                newNode->setPrev(newNode);
            } else {
                newNode->setNext(headNode);
                newNode->setPrev(tailNode);
                tailNode->setNext(newNode);
                headNode->setPrev(newNode);
                headNode = newNode;
            }
        } else if (position == size) {
            append(name);
            return;
        } else {
            Node *currentNode = headNode;
            for (int i = 0; i < position; i++) {
                currentNode = currentNode->getNext();
            }
            newNode->setNext(currentNode);
            newNode->setPrev(currentNode->getPrev());
            currentNode->getPrev()->setNext(newNode);
            currentNode->setPrev(newNode);
        }
        size++;
    }

    void deleteByValue(string name) {
        if (headNode == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node *currentNode = headNode;
        int counter = 0;

        do {
            if (currentNode->getName() == name) {
                if (currentNode == headNode) {
                    headNode = currentNode->getNext();
                    tailNode->setNext(headNode);
                    headNode->setPrev(tailNode);
                } else if (currentNode == tailNode) {
                    tailNode = currentNode->getPrev();
                    tailNode->setNext(headNode);
                    headNode->setPrev(tailNode);
                } else {
                    currentNode->getPrev()->setNext(currentNode->getNext());
                    currentNode->getNext()->setPrev(currentNode->getPrev());
                }
                delete currentNode;
                size--;
                cout << "Record: " << name << " has been deleted.\n";
                return;
            }
            currentNode = currentNode->getNext();
            counter++;
        } while (currentNode != headNode);

        cout << "Value not found.\n";
    }

    void deleteByPosition(int position) {
        if (position < 0 || position >= size) {
            cout << "Position out of bounds.\n";
            return;
        }

        Node *currentNode = headNode;

        for (int i = 0; i < position; i++) {
            currentNode = currentNode->getNext();
        }

        if (currentNode == headNode) {
            headNode = currentNode->getNext();
            tailNode->setNext(headNode);
            headNode->setPrev(tailNode);
        } else if (currentNode == tailNode) {
            tailNode = currentNode->getPrev();
            tailNode->setNext(headNode);
            headNode->setPrev(tailNode);
        } else {
            currentNode->getPrev()->setNext(currentNode->getNext());
            currentNode->getNext()->setPrev(currentNode->getPrev());
        }

        delete currentNode;
        size--;
        cout << "Record at position " << position << " has been deleted.\n";
    }

    void searchByValue(string name) {
        if (headNode == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node *currentNode = headNode;
        int position = 0;

        do {
            if (currentNode->getName() == name) {
                cout << "Record found at position " << position << ": " << name << endl;
                return;
            }
            currentNode = currentNode->getNext();
            position++;
        } while (currentNode != headNode);

        cout << "Record not found!\n";
    }

    void display() {
        if (headNode == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node *currentNode = headNode;
        do {
            cout << "  " << currentNode->getName() << endl;
            currentNode = currentNode->getNext();
        } while (currentNode != headNode);
    }

    int getLength() {
        return size;
    }
};

int main() {
    CircularDoublyLinkedList list;
    int choice, position;
    string name;

    while (true) {
        cout << "\n\n\tCircular Doubly Linked List\n";
        cout << "1. Append person\n2. Insert person by position\n3. Search for person\n";
        cout << "4. Delete person by value\n5. Delete person by position\n";
        cout << "6. Display list\n7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            list.append(name);
            cout << "Successfully added\n";
            break;
        case 2:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter position: ";
            cin >> position;
            list.insert(name, position);
            break;
        case 3:
            cout << "Enter name: ";
            cin >> name;
            list.searchByValue(name);
            break;
        case 4:
            cout << "Enter name to delete: ";
            cin >> name;
            list.deleteByValue(name);
            break;
        case 5:
            cout << "Enter position to delete: ";
            cin >> position;
            list.deleteByPosition(position);
            break;
        case 6:
            list.display();
            break;
        case 7:
            return 0;
        default:
            cout << "Invalid Input\n";
        }
    }
}
