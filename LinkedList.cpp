#include <stdexcept>
#include "LinkedList.hpp"

using namespace std;

LinkedList::LinkedList() {
  start = nullptr;
  end = nullptr;
  length = 0;
}

LinkedList::~LinkedList() {
  delete start;  // cause nodes to recursively delete themselves
}

// Accessors
Node* LinkedList::getStart() {
  return start;
}

int LinkedList::getLength() {
  return length;
}

Node* LinkedList::get(int index) {
  if (index >= length) {
    throw std::out_of_range("Index out of range");
  }

  Node* current = start;
  
  for (int i = 0; i < index; i++) {
    current = current->getNext();
  }

  return current;
}

// Mutators
void LinkedList::append(int n) {
  Node* newNode = new Node(n);

  if (end != nullptr) {
    end->setNext(newNode);
  }

  if (start == nullptr) {
    start = newNode;
  }

  end = newNode;
}

void LinkedList::append(Node* n) {

}

Node* LinkedList::remove(int i) {

}
