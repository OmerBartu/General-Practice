#include <iostream>


struct Node
{
    Node* next;
    int val;
};

class Queue {
    public:
    Queue () {
        this->head = nullptr;
        this->tail = nullptr;
    }

    Queue (int val) {
        this->head = new Node;
        head->val = val;
        this->tail = this->head;
        head->next = nullptr;
    }

    int nextVal () {
        return head->val;
    }

    void pop() {
        Node *temp = head;
        head = head->next;
        delete temp;
    }


    void push (int val) {
        if (this->isEmpty())
        {
            this->head = new Node;
        head->val = val;
        this->tail = this->head;
        head->next = nullptr;
        }

        Node *temp = new Node;
        temp->val = val;
        temp->next = nullptr;

        tail->next = temp;
        tail = tail->next;
        
    }

    bool isEmpty() {
        return (head == nullptr);
    }

    private:

    Node *head;
    Node *tail;

};

int main(int argc, char const *argv[])
{

    
    return 0;
}
