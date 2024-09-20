#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node(data);

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool valueExists(Node* head, int value) {
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->data == value) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

Node* deleteNodesInSecondList(Node* first, Node* second) {
    // Handle head deletion if needed
    while (first != nullptr && valueExists(second, first->data)) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }

    Node* curr = first;
    while (curr != nullptr && curr->next != nullptr) {
        if (valueExists(second, curr->next->data)) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        } else {
            curr = curr->next;
        }
    }

    return first;
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

bool areAllElementsSame(Node* head) {
    if (head == nullptr) {
        return true; // Empty list, considered as having all same elements
    }

    int value = head->data;
    Node* temp = head->next;
    while (temp != nullptr) {
        if (temp->data != value) {
            return false;
        }
        temp = temp->next;
    }
    return true;
}

int main() {
    Node* first = nullptr;
    Node* second = nullptr;
    int size1, size2;

    cin >> size1;
    for (int i = 0; i < size1; i++) {
        int value;
        cin >> value;
        insertNode(&first, value);
    }

    cin >> size2;
    for (int i = 0; i < size2; i++) {
        int value;
        cin >> value;
        insertNode(&second, value);
    }

    cout << "Before deletion: ";
    displayLinkedList(first);

    first = deleteNodesInSecondList(first, second);

    cout << "After deletion: ";
    displayLinkedList(first);

    if (areAllElementsSame(first)) {
        cout << "All elements in the list are the same." << endl;
    } else {
        cout << "Not all elements in the list are the same." << endl;
    }

    deleteLinkedList(first);
    deleteLinkedList(second);

    return 0;
}
