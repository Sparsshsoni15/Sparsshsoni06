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
Node * deleteFromEnd(Node * head) {
  if (head == nullptr) {
    cout << "List is empty, nothing to delete.\n";
    return nullptr;
  }

  // If there's only one node
  if (head -> next == nullptr) {
    delete head; // Free memory of the single node
    return nullptr; // List becomes empty
  }

  Node * temp = head;

  // Traverse to the second last node
  while (temp -> next -> next != nullptr) {
    temp = temp -> next;
  }

  delete temp -> next; // Free memory of the last node
  temp -> next = nullptr; // Update second last node's next to null

  return head; // Return unchanged head
}