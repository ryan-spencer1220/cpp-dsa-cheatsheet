#include "../node.h"
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
  Node *findKthNodeToEnd(int);
  Node *findKthNodeToEnd(Node *, int, int);
  void partitionList(int);
  void removeDuplicates();
  void binaryToDecimal();
  void reverseBetween(int, int);

  // PSU Proficiency Exam Practice Questions
  void removeAllButFirstAndLast();
  void removeLastTwoNodes();
  void addNodeIfUnique(int);
  void moveLastNodeToFront();
  void copyList();

  // other functions
  void print();
  void print(Node *);

private:
  Node *head;
  int length;
};