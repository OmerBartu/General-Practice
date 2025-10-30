#include "LinkedList.h"


LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

LinkedList::~LinkedList() {
    // If empty return
    if (head == nullptr)
    {
        return;
    }

    // delete until empty
    while (head != nullptr)
    {
        SingleNode *prev = head;
        head = head->getNext();
        delete prev;
    }
}