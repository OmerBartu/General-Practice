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

    private:

    Node *head;
    Node *tail;

};

int main(int argc, char const *argv[])
{

    
    return 0;
}
