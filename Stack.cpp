#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int value;
    Node* next;
};
class Stack{
public:
    virtual void add(int num) = 0;
    virtual int top() = 0;
    virtual int pop() = 0;
    virtual bool isEmpty() = 0;
};

class ListStack: public Stack{
public:
    Node* head;
    int size;

    ListStack() {
        head = nullptr;
        size = 0;
    }

    ListStack(int i) {
        head = new Node();
        head->value = i;
        size = 1;
    }

    void add (int num) {
        Node* temp = new Node();
        temp->value = num;
        temp->next = head;
        head = temp;
        size++;
    }

    int top() {
        return head->value;
    }

    int pop() {
        if (head == nullptr)
        {
            cout << "Stack Already Empty";
            return -1;
        }
        
        Node* temp = head;
        head = head->next;
        int deleted = temp->value;
        delete temp;
        return deleted;
    }

    bool isEmpty() {
        return head == nullptr;
    }
};

class ArrayStack: public Stack{
public:
    int* arr;
    int size;
    int full;

    ArrayStack(int i){
        arr = new int[i];
        size = 0;
        full = i;
    }

    void add (int num) {
        if (size == full)
        {
            cout << "Stack Is Full!!";
            return;
        }

        arr[size++] = num;
        
    }

    int top() {
        return arr[size-1];
    }

    int pop() {
        int deleted = arr[size-1];
        size--;
        return deleted;
    }

    bool isEmpty() {
        return size == full;;
    }
};

bool isValid(string s);

int main(int argc, char const *argv[])
{
    ArrayStack *stack = new ArrayStack(5);
    stack->add(1);
    stack->add(2);
    stack->add(3);
    cout << stack->pop() << endl;
    cout << stack->top() << endl;
    return 0;
}


bool isValid(string s) {
        stack<char> stac;

        for(char i : s) {
            if (i == '(' || i == '[' || i == '{') {
                stac.push(i);
            } else if (stac.empty()) {
                return false;
            } else if ((stac.top() == '(' && i == ')') || 
            (stac.top() == '[' && i == ']') || 
            (stac.top() == '{' && i == '}')) {
                stac.pop();
            } else {
                return false;
            }
        }

        return stac.empty();
    }