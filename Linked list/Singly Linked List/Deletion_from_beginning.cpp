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
Node * deleteFromBeginning(Node * head) {
  if (head == nullptr) {
    cout << "List is empty, nothing to delete.\n";
    return nullptr;
  }

  Node * temp = head; // Store the current head
  head = head -> next; // Move head to the next node
  delete temp; // Free memory of the old head

  return head; // Return the new head
}
int main() {
  // Creating a simple linked list manually: 10 -> 20 -> 30
  Node * head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);

  cout << "Original list: ";
  Node * temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  head = deleteFromBeginning(head);

  cout << "List after deletion from beginning: ";
  temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  return 0;
}