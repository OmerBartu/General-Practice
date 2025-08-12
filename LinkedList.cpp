#include <iostream>

using namespace std;

struct Node
{
    int value;
    Node *next;
};

class LinkedList {
public:
    Node *head;

    LinkedList() {
        head = nullptr;
    }

    ~LinkedList() {
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }
}

    // Add an element to the start
    void add(int val) {
        Node *temp = new Node();
        temp->value = val;
        temp->next = head;
        head = temp;
    }

    // Delete first element and return it
    int deleteStart() {
        if (head == nullptr)
        {
            return -1;
        }
        
        Node *temp = head;
        head = head->next;

        int val = temp->value;
        delete temp;
        return val;
    }

    // Insert at
    void insertAt(int val, int index) {
        if (index == 0)
        {
            add(val);
        }
        Node *temp = head;
        for (int i = 0; i < index-1; i++)
        {
            if (temp == nullptr)
            {
                cout << "Error: Index Error!";
                return;
            }
            temp = temp->next;
        }

        Node *node = new Node();
        node->value = val;
        node->next = temp->next;
        temp->next = node;
    }

    //Delete a specific element
    int deleteElement(int i) {
        if (head == nullptr) {
            return -1;
        }
        if (head->value == i) {
            Node* temp = head;
            int deleted = temp->value;
            head = head->next;
            delete temp;
            return deleted;
        }

        Node* prev = nullptr; 
        Node* temp = head;
        while (temp != nullptr && temp->value != i) {
            prev = temp; 
            temp = temp->next;
        }

        if (temp == nullptr) {
            return -1; 
        }

        prev->next = temp->next; 
        int deleted = temp->value;
        delete temp;
        return deleted;
    }

    // Printing list
    void print() {
        if (head == nullptr) {
            cout << "List is empty!!\n";
            return;
        }

        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

};

int main(int argc, char const *argv[])
{
    LinkedList *list = new LinkedList();

    list->add(5);
    list->add(6);
    list->add(10);
    list->print();
    cout << list->deleteElement(10) << endl;
    list->print();
    return 0;
}
