#pragma once

#include "Node.hpp"

using namespace std;

class LinkedList {
  Node* start;
  Node* end;
  int length;

public:
  LinkedList();
  ~LinkedList();

  // Accessors

  // Get the starting node
  Node* getStart();

  // Get the length of the linked list
  int getLength();

  Node* get(int index);  // Return node @ the given index

  // Mutators
  void append(int n);  // Create a new node
  void append(Node* n);

  // Unlink the node at the given index from the rest of the linked list,
  // and return the orphaned node.
  Node* remove(int index);  // return the removed node
};