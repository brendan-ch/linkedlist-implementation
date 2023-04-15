class Node {
  int data;
  Node* next;

public:
  Node(int data);
  ~Node();

  int getData();

  Node* getNext();

  void setNext(Node* newNext);
};