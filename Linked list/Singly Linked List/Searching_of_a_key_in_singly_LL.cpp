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

bool search(Node * head, int key) {
  Node * current = head;

  while (current != nullptr) {
    if (current -> data == key) {
      return true; // key found
    }
    current = current -> next; // move to next node
  }

  return false; // key not found
}

int main() {
  // Creating a simple linked list manually: 10 -> 20 -> 30
  Node * head = new Node(10);
  head -> next = new Node(20);
  head -> next -> next = new Node(30);

  int key;
  cin >> key;

  if (search(head, key)) {
    cout << "Found\n";
  } else {
    cout << "Not Found\n";
  }

  return 0;
}


