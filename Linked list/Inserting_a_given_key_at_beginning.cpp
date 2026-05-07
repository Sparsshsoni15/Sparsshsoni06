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
Node* insertAtBeginning(Node* head, int value) {
  Node* newNode = new Node(value); // Create new node.
  newNode->next = head; // New node points to the old head.
  head = newNode; // Update head.
  return head; // Return new head.
}
