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
Node * insertAtEnd(Node * head, int value) {
  Node * newNode = new Node(value); // create new node

  // If list is empty
  if (head == nullptr) {
    return newNode; // new node becomes head
  }

  Node * temp = head;

  // Traverse to the last node
  while (temp -> next != nullptr) {
    temp = temp -> next;
  }

  temp -> next = newNode; // link new node at end
  return head; // return unchanged head
}
