class Node {
  int data;
  Node* next;

public:
  Node(int data);
  ~Node();

  Node* getNext();

  void setNext(Node* newNext);
};