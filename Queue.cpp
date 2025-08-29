#include <iostream>

using namespace std;


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

    int pop() {
        Node *temp = head;
        head = head->next;

        int deleted = temp->val;
        delete temp;
        return deleted;
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

    Queue q;  

    cout << boolalpha; 

    cout << "Initially empty? " << q.isEmpty() << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Next value: " << q.nextVal() << endl; 
    cout << "Popping: " << q.pop() << endl;
    cout << "Next value: " << q.nextVal() << endl; 
    cout << "Is empty? " << q.isEmpty() << endl;

    q.pop();
    q.pop();

    cout << "Empty after popping all? " << q.isEmpty() << endl;
    
    return 0;
}
