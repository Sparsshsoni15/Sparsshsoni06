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
Node * insertAfterValue(Node * head, int target, int value) {
  Node * temp = head;

  // Traverse to find the target value
  while (temp != nullptr && temp -> data != target) {
    temp = temp -> next;
  }

  if (temp == nullptr) {
    cout << "Value " << target << " not found in the list!\n";
    return head;
  }

  // Insert new node after target
  Node * newNode = new Node(value);
  newNode -> next = temp -> next;
  temp -> next = newNode;

  return head;
}

int main() {
  // Creating a simple linked list manually: 10 -> 20 -> 30
  Node * head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);

  int target, value;
  cin >> target >> value;

  head = insertAfterValue(head, target, value);

  // Print the updated list
  Node * temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  return 0;
}