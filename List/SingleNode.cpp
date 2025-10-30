#include <iostream>
#include "SingleNode.h"

SingleNode::SingleNode() : val(0), next(nullptr) {}
SingleNode::SingleNode(int val) : val(val), next(nullptr) {}

SingleNode::~SingleNode() {};

void SingleNode::print() const {
    std::cout << val << " ";
}


// Getter methods
SingleNode* SingleNode::getNext() {
    return next;
}

int SingleNode::getVal() {
    return val;
}