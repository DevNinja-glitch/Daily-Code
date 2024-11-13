#include <iostream>
using namespace std;

class Node {
private:
    string name;
    Node *next;

public:
    Node() : name(""), next(NULL) {}

    void setName(string name) { this->name = name; }
    void setNext(Node *next) { this->next = next; }
    string getName() { return name; }
    Node *getNext() { return next; }
};

class SinglyLinkedList {
private:
    Node *headNode;
    int size;

public:
    SinglyLinkedList() : headNode(NULL), size(0) {}

    // Destructor to delete all nodes and free memory
    ~SinglyLinkedList() {
        Node *currentNode = headNode;
        while (currentNode != NULL) {
            Node *nextNode = currentNode->getNext();
            delete currentNode;
            currentNode = nextNode;
        }
        cout << "List destroyed.\n";
    }

    void append(string name) {
        Node *newNode = new Node();
        newNode->setName(name);

        if (headNode == NULL) {
            headNode = newNode;
        } else {
            Node *currentNode = headNode;
            while (currentNode->getNext() != NULL) {
                currentNode = currentNode->getNext();
            }
            currentNode->setNext(newNode);
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
            newNode->setNext(headNode);
            headNode = newNode;
        } else {
            Node *currentNode = headNode;
            for (int i = 1; i < position; i++) {
                currentNode = currentNode->getNext();
            }
            newNode->setNext(currentNode->getNext());
            currentNode->setNext(newNode);
        }
        size++;
    }

    void deleteByValue(string name) {
        if (headNode == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node *currentNode = headNode;
        Node *lastCurrentNode = NULL;

        while (currentNode != NULL) {
            if (currentNode->getName() == name) {
                if (currentNode == headNode) {
                    headNode = currentNode->getNext();
                } else {
                    lastCurrentNode->setNext(currentNode->getNext());
                }
                delete currentNode;
                size--;
                cout << "Record: " << name << " has been deleted.\n";
                return;
            }
            lastCurrentNode = currentNode;
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
        Node *lastCurrentNode = NULL;

        for (int i = 0; i < position; i++) {
            lastCurrentNode = currentNode;
            currentNode = currentNode->getNext();
        }

        if (currentNode == headNode) {
            headNode = currentNode->getNext();
        } else {
            lastCurrentNode->setNext(currentNode->getNext());
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

    void display() {
        if (headNode == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node *currentNode = headNode;
        while (currentNode != NULL) {
            cout << "  " << currentNode->getName() << endl;
            currentNode = currentNode->getNext();
        }
    }

    int getLength() {
        return size;
    }

    // Function to copy the current list to a new list
    SinglyLinkedList* copyList() {
        SinglyLinkedList *newList = new SinglyLinkedList();
        Node *currentNode = headNode;

        while (currentNode != NULL) {
            newList->append(currentNode->getName());
            currentNode = currentNode->getNext();
        }

        cout << "List copied.\n";
        return newList;
    }

    // Function to reverse the list
    void reverseList() {
        Node *prevNode = NULL;
        Node *currentNode = headNode;
        Node *nextNode = NULL;

        while (currentNode != NULL) {
            nextNode = currentNode->getNext();
            currentNode->setNext(prevNode);
            prevNode = currentNode;
            currentNode = nextNode;
        }

        headNode = prevNode;
        cout << "List reversed.\n";
    }
};

int main() {
    SinglyLinkedList list;
    int choice, position;
    string name;

    while (true) {
        cout << "\n\n\tSingly Linked List\n";
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
            SinglyLinkedList* copiedList = list.copyList();
            cout << "Copied list:\n";
            copiedList->display();
            delete copiedList;
            break;
        }
        case 8:
            list.reverseList();
            break;
        case 9:
            return 0;
        default:
            cout << "Invalid Input\n";
        }
    }
}

