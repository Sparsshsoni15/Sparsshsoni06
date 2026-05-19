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
// Delete the last node given the reference to second-last node
Node * deleteLastNode(Node * head, Node * prevTail) {
  if (head == nullptr) {
    cout << "List is empty, nothing to delete.\n";
    return nullptr;
  }

  // If list has only one node
  if (prevTail == nullptr) {
    delete head;
    return nullptr;
  }

  // Delete the last node
  delete prevTail -> next;
  prevTail -> next = nullptr;

  return head;
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

  // Deleting the last node (30) using reference to second-last node (20)
  head = deleteLastNode(head, head -> next);

  cout << "List after deletion from end: ";
  temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  return 0;
}