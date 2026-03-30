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

    // 🔹 Find Maximum
    int findMax() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return -1; // or any invalid value
        }

        int maxVal = head->data; // start with first node
        Node* temp = head->next;

        while (temp != NULL) {
            if (temp->data > maxVal) {
                maxVal = temp->data; // update maximum
            }
            temp = temp->next;
        }

        return maxVal;
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
    list.append(50);
    list.append(30);
    list.append(40);

    list.display();

    int maximum = list.findMax();
    cout << "Maximum value: " << maximum << endl;

    return 0;
}