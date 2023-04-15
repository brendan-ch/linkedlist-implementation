#include <iostream>
#include "Node.hpp"

using namespace std;

Node::Node(int initialData) {
  std::cout << "Created node @ " << this << std::endl;
  data = initialData;
  next = nullptr;
}

Node::~Node() {
  std::cout << "Deleted node @ " << this << std::endl;
  delete next;  // runs the destructor on the next item
  // if the start is deleted, then the entire list should also be deleted
}

int Node::getData() {
  return data;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}