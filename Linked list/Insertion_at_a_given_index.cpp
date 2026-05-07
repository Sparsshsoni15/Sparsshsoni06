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
Node * insertAtIndex(Node * head, int index, int value) {
  Node * newNode = new Node(value);

  // Insert at beginning
  if (index == 0) {
    newNode -> next = head;
    return newNode;
  }

  Node * temp = head;
  int currentIndex = 0;

  // Move to (index - 1) position
  while (temp != nullptr && currentIndex < index - 1) {
    temp = temp -> next;
    currentIndex++;
  }

  // If index is out of bounds
  if (temp == nullptr) {
    cout << "Index out of range!\n";
    delete newNode;
    return head;
  }

  // Insert node
  newNode -> next = temp -> next;
  temp -> next = newNode;

  return head;
}
