#pragma once

#include "Node.hpp"

using namespace std;

class LinkedList {
  Node* start;
  Node* end;  // for performance (TM)
  int length;

public:
  LinkedList();
  ~LinkedList();

  // Accessors
  Node* getStart();
  int getLength();

  Node* get(int index);  // return node @ index

  // Mutators
  void append(int n);  // create a new node
  void append(Node* n);

  // unlink a node @ given index from previous node,
  // and unlink next node from removed node
  // does not delete the node, but returns the removed node
  // so the caller can delete it manually
  Node* remove(int index);  // return the removed node
};