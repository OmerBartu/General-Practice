#include "LinkedList.h"


LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

LinkedList::~LinkedList() {
    if (head == nullptr)
    {
        return;
    }

    while (head != nullptr)
    {
        SingleNode *prev = head;
        head = head->getNext();
        delete prev;
    }
}