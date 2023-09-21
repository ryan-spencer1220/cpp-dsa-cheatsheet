#include "node.h"

#include <iostream>

class DoublyLinkedList
{
private:
  Node *head;
  Node *tail;
  int length;

public:
  DoublyLinkedList();
  DoublyLinkedList(int);
  ~DoublyLinkedList();

  // add & remove functions
  void append(int);
  void prepend(int);
  void deleteFirst();
  void deleteLast();
  bool insert(int, int);
  void remove(int);

  // C++ DSA LL: Interview Functions
  void reverse();
  bool palindromeChecker();
  void swapNodesInPairs();

  // PSU Proficiency Exam Practice Questions
  void removeAllButFirstAndLast();
  void removeAllButFirstAndLast(Node *);
  void removeLastTwoNodes();
  void removeLastTwoNodes(Node *);
  bool addNodeIfUnique(int);
  bool addNodeIfUnique(Node *, int);
  void swapLastNodeAndFirstNode();
  void swapLastNodeAndFirstNode(Node *&, Node *&, Node *&);
  void copyList();
  void copyList(Node *&, Node *&);

  // Helper functions
  Node *get(int);
  bool set(int, int);
  void print();
  void print(Node *);
  int size();
  bool isEmpty();
};