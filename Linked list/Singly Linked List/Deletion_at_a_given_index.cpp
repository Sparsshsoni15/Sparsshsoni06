#include<iostream>
using namespace std;
    class Node {
  public: int data;
  Node * next;

  // Constructor
  Node(int value) {
    data = value;
    next = nullptr;
  }
};
Node * deleteAtIndex(Node * head, int index) {
  if (head == nullptr) {
    cout << "List is empty, nothing to delete.\n";
    return nullptr;
  }

  // Delete the first node
  if (index == 0) {
    Node * temp = head;
    head = head -> next;
    delete temp;
    return head;
  }

  // Traverse to the node just before the index
  Node * temp = head;
  int currentIndex = 0;
  while (temp != nullptr && currentIndex < index - 1) {
    temp = temp -> next;
    currentIndex++;
  }

  // Delete the node at index
  Node * nodeToDelete = temp -> next;
  temp -> next = nodeToDelete -> next;
  delete nodeToDelete;

  return head;
}
int main() {
  // Creating a simple linked list manually: 10 -> 20 -> 30 -> 40
  Node * head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);
  head -> next -> next -> next = new Node(40);

  cout << "Original list: ";
  Node * temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  int index;
  cin >> index;

  head = deleteAtIndex(head, index);

  cout << "List after deletion at index " << index << ": ";
  temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  return 0;
}