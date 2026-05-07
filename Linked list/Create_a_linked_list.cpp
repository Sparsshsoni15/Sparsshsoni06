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

// Function to create a new node
Node * createNode(int value) {
  // call constructor
  Node * newNode = new Node(value); 
  return newNode;
}

int main() {
  int value;
  cin >> value;

  Node * node = createNode(value);
    cout << "Node created successfully!" << endl;
  cout << "Data = " << node -> data << endl;
  // will display 0 or NULL
  cout << "Next = " << node -> next << endl; 

  return 0;
}
