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
Node * deleteAfterValue(Node * head, int targetValue) {
  Node * temp = head;
  while (temp != NULL && temp -> data != targetValue) {
    temp = temp -> next;
  }
  if (temp == NULL || temp -> next == NULL) {
    return head;
  }
  Node * delNode = temp -> next;
  temp -> next = delNode -> next;
  delete delNode;

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

  int targetValue;
  cin >> targetValue;

  head = deleteAfterValue(head, targetValue);

  cout << "List after deletion: ";
  temp = head;
  while (temp != nullptr) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;

  return 0;
}