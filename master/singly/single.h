#include "node.h"
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
  void append(Node *, int);
  void prepend(int);
  void removeFirst();
  void removeLast();
  void removeLast(Node *);
  void insert(int, int);
  void insert(Node *, int, int, int);
  void remove(int);
  void remove(Node *, int);

  // C++ DSA LL: Interview Functions
  void reverse();
  void reverse(Node *, Node *, Node *);
  Node *findMiddleNode();
  Node *findMiddleNode(Node *, Node *);
  bool hasLoop();
  bool hasLoop(Node *, Node *);
  Node *findKthNodeFromEnd(int);
  Node *findKthNodeFromEnd(Node *, Node *);
  void removeDuplicates();
  int binaryToDecimal();
  int binaryToDecimal(Node *, int);
  void reverseBetween(int, int);

  // PSU Proficiency Exam Practice Questions
  void removeAllButFirstAndLast();
  void removeAllButFirstAndLast(Node *);
  void removeLastTwoNodes();
  void removeLastTwoNodes(Node *, int count);
  bool addNodeIfUnique(int);
  bool addNodeIfUnique(Node *, int);
  void swapLastNodeAndFirstNode();
  void swapLastNodeAndFirstNode(Node *&, Node *&, Node *&);
  Node *copyList();
  Node *copyList(Node *, Node *&);

  // Helper functions
  void print();
  void print(Node *);
  int getLength();

private:
  Node *head;
  Node *tail;
  int length;
};