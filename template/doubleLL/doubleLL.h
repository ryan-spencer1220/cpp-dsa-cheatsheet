class DoublyLinkedList
{
private:
  struct Node
  {
    int data;
    Node *next;
    Node *prev;
  };
  Node *head;
  Node *tail;
  int length;

public:
  DoublyLinkedList();
  ~DoublyLinkedList();
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
  void sumLists(DoublyLinkedList, DoublyLinkedList);
  void palindrome();
  void intersection(DoublyLinkedList);
  void loopDetection();
};