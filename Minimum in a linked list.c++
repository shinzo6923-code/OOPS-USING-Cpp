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

    // 🔹 Find Minimum
    int findMin() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return -1;
        }

        int minVal = head->data;   // start with first node
        Node* temp = head->next;

        while (temp != NULL) {
            if (temp->data < minVal) {
                minVal = temp->data;   // update minimum
            }
            temp = temp->next;
        }

        return minVal;
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
    list.append(5);
    list.append(30);
    list.append(2);

    list.display();

    int minimum = list.findMin();
    cout << "Minimum value: " << minimum << endl;

    return 0;
}