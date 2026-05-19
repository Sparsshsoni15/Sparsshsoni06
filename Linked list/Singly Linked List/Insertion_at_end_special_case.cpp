#include <iostream>

using namespace std;

class Node {
  public: int data;
  Node * next;

  Node(int value) {
    data = value;
    next = nullptr;
      }
};
void insertAtEnd(Node * & head, Node * & tail, Node * newNode) {

  // If list is empty
  if (head == nullptr) {
    head = newNode;
    tail = newNode;
    return;
  }

  // Attach at the end
  tail -> next = newNode;

  // Update tail pointer
  tail = newNode;
}
