#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
  int arr[5] = {5, 9, 15, 61, -5};
  int len = sizeof(arr) / sizeof(arr[0]);

  // Node* start = new Node(arr[0]);
  // Node* oldNode = start;

  // for (int i = 1; i < len; i++) {
  //   Node* newNode = new Node(arr[i]);
  //   oldNode->setNext(newNode);
  //   oldNode = newNode;
  // }

  // delete start;

  LinkedList* list = new LinkedList();
  for (int i = 0; i < len; i++) {
    list->append(arr[i]);
  }

  std::cout << list->get(2)->getData() << std::endl;

  delete list;
  return 0;
}