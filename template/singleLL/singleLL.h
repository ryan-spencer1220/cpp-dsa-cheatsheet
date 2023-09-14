#include <iostream>

using namespace std;

class SinglyLinkedList
{
public:
  SinglyLinkedList();
  ~SinglyLinkedList();
  void append(int);
  void prepend(int);
  void insert(int, int);
  void remove(int);
  void print();
  int size();
  bool isEmpty();
  int indexOf(int);
  int valueAt(int);
  void reverse();
  void removeDuplicates();
  void removeDuplicatesNoBuffer();
  int kthToLast(int);
  void deleteMiddleNode();
  void partition(int);
  void sumLists(SinglyLinkedList, SinglyLinkedList);
  void palindrome();
  void intersection(SinglyLinkedList);
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