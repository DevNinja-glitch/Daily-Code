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

class DoublyLinkedList {
private:
    Node *headNode;
    Node *tailNode;
    int size;

public:
    DoublyLinkedList() : headNode(NULL), tailNode(NULL), size(0) {}

    void append(string name) {
        Node *newNode = new Node();
        newNode->setName(name);

        if (headNode == NULL) {
            headNode = newNode;
            tailNode = newNode;
        } else {
            tailNode->setNext(newNode);
            newNode->setPrev(tailNode);
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
            } else {
                newNode->setNext(headNode);
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
        Node *currentNode = headNode;

        while (currentNode != NULL) {
            if (currentNode->getName() == name) {
                if (currentNode == headNode) {
                    headNode = currentNode->getNext();
                    if (headNode != NULL) headNode->setPrev(NULL);
                } else if (currentNode == tailNode) {
                    tailNode = currentNode->getPrev();
                    if (tailNode != NULL) tailNode->setNext(NULL);
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
        }
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
            if (headNode != NULL) headNode->setPrev(NULL);
        } else if (currentNode == tailNode) {
            tailNode = currentNode->getPrev();
            if (tailNode != NULL) tailNode->setNext(NULL);
        } else {
            currentNode->getPrev()->setNext(currentNode->getNext());
            currentNode->getNext()->setPrev(currentNode->getPrev());
        }

        delete currentNode;
        size--;
        cout << "Record at position " << position << " has been deleted.\n";
    }

    void searchByValue(string name) {
        Node *currentNode = headNode;
        int position = 0;

        while (currentNode != NULL) {
            if (currentNode->getName() == name) {
                cout << "Record found at position " << position << ": " << name << endl;
                return;
            }
            currentNode = currentNode->getNext();
            position++;
        }
        cout << "Record not found!\n";
    }

    DoublyLinkedList* copy() {
        DoublyLinkedList *newList = new DoublyLinkedList();
        Node *currentNode = headNode;

        while (currentNode != NULL) {
            newList->append(currentNode->getName());
            currentNode = currentNode->getNext();
        }

        cout << "List copied successfully.\n";
        return newList;
    }

    void reverse() {
        Node *tempNode = NULL;
        Node *currentNode = headNode;

        tailNode = headNode;

        while (currentNode != NULL) {
            tempNode = currentNode->getPrev();
            currentNode->setPrev(currentNode->getNext());
            currentNode->setNext(tempNode);
            currentNode = currentNode->getPrev();
        }

        if (tempNode != NULL) {
            headNode = tempNode->getPrev();
        }
        cout << "List reversed successfully.\n";
    }

    void display() {
        Node *currentNode = headNode;

        if (size == 0) {
            cout << "List is empty!\n";
            return;
        }

        while (currentNode != NULL) {
            cout << "  " << currentNode->getName() << endl;
            currentNode = currentNode->getNext();
        }
    }

    int getLength() {
        return size;
    }
};

int main() {
    DoublyLinkedList list;
    int choice, position;
    string name;

    while (true) {
        cout << "\n\n\tDoubly Linked List\n";
        cout << "1. Append person\n2. Insert person by position\n3. Search for person\n";
        cout << "4. Delete person by value\n5. Delete person by position\n";
        cout << "6. Display list\n7. Copy list\n8. Reverse list\n9. Exit\n";
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
        case 7: {
            DoublyLinkedList *copiedList = list.copy();
            cout << "Copied List:\n";
            copiedList->display();
            delete copiedList; // Free memory after displaying copied list
            break;
        }
        case 8:
            list.reverse();
            cout << "Reversed List:\n";
            list.display();
            break;
        case 9:
            return 0;
        default:
            cout << "Invalid Input\n";
        }
    }
}

