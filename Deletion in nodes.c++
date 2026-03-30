#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void append(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // 🔴 Delete from beginning
    void deleteFromStart() {
        if (head == NULL) return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // 🔴 Delete from end
    void deleteFromEnd() {
        if (head == NULL) return;

        // only one node
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    // 🔴 Delete specific value
    void deleteValue(int value) {
        if (head == NULL) return;

        // if value is at head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL && temp->next->data != value) {
            temp = temp->next;
        }

        // if value found
        if (temp->next != NULL) {
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);

    list.display();

    list.deleteFromStart();
    list.display();

    list.deleteFromEnd();
    list.display();

    list.deleteValue(20);
    list.display();

    return 0;
}