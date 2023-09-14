#include <iostream>

using namespace std;

class SinglyLinkedList
{
public:
  // constructors & destructor
  SinglyLinkedList();
  SinglyLinkedList(const SinglyLinkedList &);
  ~SinglyLinkedList();

  // add & remove functions
  void append(int);
  void prepend(int);
  void insert(int);
  void remove(int);
  void removeDuplicates();
  void deleteMiddleNode();

  // other functions
  void print();
  int size();
  bool isEmpty();
  int indexOf(int);
  void reverse();
  void palindrome();
  void loopDetection();

private:
  struct Node
  {
    int data;
    Node *next;
  };
  Node *head;
  int length;
};