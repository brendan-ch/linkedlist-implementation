#include <iostream>
#include <stdexcept>
#include "LinkedList.hpp"

LinkedList::LinkedList() {
  cout << "Creating LinkedList @ " << this << endl;

  start = nullptr;
  end = nullptr;
  length = 0;
}

LinkedList::~LinkedList() {
  cout << "Deleting LinkedList @ " << this << endl;
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

// Create a new node with the given int and append it to the end of the list.
void LinkedList::append(int n) {
  Node* newNode = new Node(n);

  if (end != nullptr) {
    end->setNext(newNode);
  }

  if (start == nullptr) {
    start = newNode;
  }

  end = newNode;
  length++;
}

// Insert the passed node at the end of the list.
void LinkedList::append(Node* n) {
  if (end != nullptr) {
    end->setNext(n);
  }
  end = n;
  length++;
}

Node* LinkedList::remove(int index) {
  if (index >= length) {
    throw std::out_of_range("Index out of range");
  }

  // Track previous, current, and next nodes
  Node* previous = nullptr;
  Node* current = start;
  Node* next = start->getNext();
  
  // Starting at index 0, iterate through current
  for (int i = 0; i < index; i++) {
    // Shift positions
    previous = current;
    current = next;
    next = next->getNext();
  }

  // Re-link previous to next
  if (previous != nullptr) {
    previous->setNext(next);
  } else {  // i.e. if at beginning of list
    start = current->getNext();
  }


  if (current != nullptr) {
    current->setNext(nullptr);
  }

  length--;

  return current;
}
