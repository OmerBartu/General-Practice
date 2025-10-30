#include "SingleNode.h"

class LinkedList
{
private:
    SingleNode *head;
    SingleNode *tail;
    int size;
public:
    LinkedList();
    ~LinkedList();

    void append(int val);
};
